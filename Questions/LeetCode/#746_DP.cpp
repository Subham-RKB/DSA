class Solution {
public:
    int helper(vector<int>& cost,int n,vector<int>& dp)
    {
        if(n<0) return 0;
        if(n==0 || n==1) return cost[n];
        if(dp[n]!=0) return dp[n];
        dp[n] = cost[n]+ min(helper(cost,n-1,dp),helper(cost,n-2,dp));
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1);
        return min(helper(cost,n-1,dp),helper(cost,n-2,dp));
    }
};