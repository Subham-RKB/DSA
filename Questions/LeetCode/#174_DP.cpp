class Solution {
public:
    int k;
    int ans=INT_MIN;
    int helper(vector<vector<int>>& d,int i,int j,vector<vector<int>>& dp){
            if(i==d.size()-1 && j==d[0].size()-1){
                return dp[i][j]=max(1,1-d[i][j]);
            }
        if(dp[i][j]!=INT_MAX){
            return dp[i][j];
        }
        if(j+1!=d[0].size()){
            dp[i][j]=max(1,helper(d,i,j+1,dp)-d[i][j]);
        }
        if(i+1!=d.size()){
            dp[i][j]=min(dp[i][j],max(1,helper(d,i+1,j,dp)-d[i][j]));
        }
        return dp[i][j];
//         if(i==d.size()-1 && j==d[0].size()-1){
//             if(d[i][j]<0){
//                 dp[i][j]=abs(d[i][j]);
                
//             }
//             else{
//                 dp[i][j]=1;
//             }
//             if(ans<dp[i][j]){
//                 ans=dp[i][j];
//             }
//             return;
//         }
//         if(i >= d.size() || j >= d[0].size()){
// 		    return;
// 	    }
//         if(dp[i][j]!=-1){
//             if(ans<d[i][j]){
//                 ans=dp[i][j];
//             }
//             return;
//         }
//         if(d[i][j]<0){
//             k=abs(d[i][j]);
//         }
//         else
//         {
//             k*=-1;
//         }
//         dp[i][j]= p+k;
//         cout<<dp[i][j]<<endl;
//         if(ans<dp[i][j]){
//             ans=dp[i][j];
//         }
//         helper(d,i+1,j,p+k,dp);
//         helper(d,i,j+1,p+k,dp);
        
    }
    int calculateMinimumHP(vector<vector<int>>& d) {
        vector<vector<int>> dp(d.size(),vector<int> (d[0].size(),INT_MAX));
        return helper(d,0,0,dp);
    }
};