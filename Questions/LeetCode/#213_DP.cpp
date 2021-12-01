class Solution {
public:
    int helper(vector<int>& nums){
        int n=nums.size();
        vector<int> dp(n+1);
        dp[0]=0;
        dp[1]=nums[0];
        for(int i=1;i<n;i++){
            dp[i+1]=max(dp[i],dp[i-1]+nums[i]);
        }
        return dp[n];
    }
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size() == 1) return nums[0];
        vector<int> n1(nums.begin()+1,nums.end());
        vector<int> n2(nums.begin(),nums.end()-1);
        return max(helper(n1),helper(n2));
    }
};