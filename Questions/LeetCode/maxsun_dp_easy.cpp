class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=-10000000;
        int a=0;
        for(int i=0;i<nums.size();i++){
            a=max(a+nums[i],nums[i]);
            ans=max(ans,a);
        }
        return ans;
    }
};