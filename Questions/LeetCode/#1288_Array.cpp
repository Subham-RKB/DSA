class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& in) {
        int count=1;
        sort(in.begin(),in.end());
        int x= in[0][0];
        int y= in[0][1];
        for(int i=1;i<in.size();i++){
            if(x<in[i][0] && y<in[i][1]){
                count++;
            }
            if(in[i][1]>y){
                x=in[i][0];
                y=in[i][1];
            }
        }
        // vector<int> v(1000,0);
        // for(int i=0;i<in.size();i++){
        //     for(int j=0;j<in.size();j++){
        //         if(in[i][0]<=in[j][0] && in[j][1]<=in[i][1] && v[j]==0 && i!=j){
        //             count++;
        //             v[j]=1;
        //         }
        //     }
        // }
        // return in.size()-count;
        return count; 
    }
};