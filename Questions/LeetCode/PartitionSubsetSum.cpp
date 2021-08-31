class Solution {
public:
    bool canPartition(vector<int>& nums) {
        unordered_map<int,int> s;
        int summ = accumulate(nums.begin(),nums.end(),0);
        if(summ%2==0){
        bool dp[nums.size()+1][summ/2+1];
        for(int i=0;i<=nums.size();i++){
            for(int j=0;j<=summ/2;j++){
                if(i==0 || j==0){
                    dp[i][j]=false;
                }
                else if(nums[i-1]>j){
                    dp[i][j]=dp[i-1][j];
                }
                else if(nums[i-1]==j){
                    dp[i][j]=true;
                }
                else{
                    dp[i][j]=dp[i-1][j] || dp[i-1][j-nums[i-1]];
                }
            }
        }
            return dp[nums.size()][summ/2];
        }
        return false;
    }
};