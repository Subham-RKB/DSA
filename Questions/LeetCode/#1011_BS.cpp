class Solution {
public:
    bool helper(vector<int>& v,int d,int m)
    {
        int a = 0;
        int count = 1;
        int  i = 0;
        for(int i=0;i<v.size();i++)
        {
            if(a+v[i]>m)
            {
                a=0;
                count++;
            }
            a+=v[i];
        }
        return count>d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(),weights.end());
        int h = accumulate(weights.begin(),weights.end(),0);
        int ans = 0;
        while(l<h)
        {
            int mid = (h+l)/2;
            if(helper(weights,days,mid))
            {
                l = mid+r1;
            }
            else{
                h = mid;
            }
        }
        return l;
    }
};
// 1 2 3 1 1
// 1  8 