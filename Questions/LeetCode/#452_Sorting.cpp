// We can merge the intervals and see how many intervals we get after merging which is a required answer.
//         But, there is a twist in merging......Think yourself......
//         So,let us understand how we can merge the intervals with an example.
//         [1,6] [2,8] [7,12]
//         On merging we would get [1,8][7,12]->[1,12];
//         But there is some exception question......
//         A balloon with xstart and xend is burst by an arrow shot at x if xstart <= x <= xend.
//         So, we take any one interval and insert all these intervals inside interval [points[i][0],min(points[i][1],points[i+1][1])].
//         We are taking minimum value to limit Xstart<=X<=Xend.
//         Try puting Maximum value and see the result yourself to understand better.
//         Lets insert all the overlapping intervals in [1,6]
//         [2,8] overlaps [1,6] so the interval becomes [1,min(6,8)] and [7,12] dont olverlap [1,6] so we have 2 intervals left after merging [1,6] and [7,12] so we need to shoot arrow at 6 and 12
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& v) {
        int n=v.size();
        int ans=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            int end = v[i][1];
            //Checking if interval overlaps.
            while(i+1<n && v[i+1][0]<=end){
                end=min(end,v[i+1][1]);
                i++;
            }
            ans++;
        }
        return ans;
    }
};