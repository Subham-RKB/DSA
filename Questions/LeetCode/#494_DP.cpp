class Solution {
public:
    int helper(vector<int>& v,int sum,int i,vector<vector<int>>& dp){
        int n=v.size();
        if(i==n) return (sum==0?1:0);
        if(dp[i][sum]!=-1) return dp[i][sum];
        dp[i][sum]=(helper(v,sum+v[i],i+1,dp)+helper(v,abs(sum-v[i]),i+1,dp));
        //cout<<sum<<endl;
        return dp[i][sum];
    }
    int findTargetSumWays(vector<int>& nums, int sum) {
        int n=nums.size();
        sum=abs(sum);
        vector<vector<int>> dp(n+1,vector<int>(10001,-1));
        int ans= helper(nums,sum,0,dp);
        return ans;
    }
};