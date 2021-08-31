class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=*max_element(nums.begin(),nums.end());
        int minn=1,maxx=1;
        for(int s:nums){
            if(s==0){
                minn=1;
                maxx=1;
                continue;
            }
            int tmp=maxx*s;
            maxx=max(s*maxx,max(s*minn,s));
            minn=min(tmp,min(s*minn,s));
            ans=max(ans,maxx);
        }
        return ans;
    }
};