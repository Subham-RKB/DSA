class Solution {
public:
    int n,m;
    int dp[71][71][71];
    int cal(int i,int j,int k,vector<vector<int>>& grid){
        if(!(0<=i&&i<n)||!(0<=j&&j<m)||!(0<=k&&k<m)) return 0;
        if(dp[i][j][k]!=-1) return dp[i][j][k];
        int ans=0;
        for(int x=-1;x<=1;x++){
            for(int y=-1;y<=1;y++){
                ans=max(ans,cal(i+1,j+x,k+y,grid));
            }
        }
        return dp[i][j][k]=grid[i][j]+(j==k?0:grid[i][k]) + ans;
    }
    
    int cherryPickup(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        memset(dp,-1,sizeof(dp));
        return cal(0,0,m-1,grid);
    }
    // int n,m;
    // int dp[71][71][71];
    // int helper(int i,int j,int k,vector<vector<int>>& grid){
    //     if(!(0<=i && i<n)|| !(0<=j && j<m)|| !(0<=k&&k<m)) return 0;
    //     if(dp[i][j][k]!=-1) return dp[i][j][k];
    //     int ans=0;
    //     for(int x=0;x<=1;x++){
    //         for(int y=-1;y<=1;y++){
    //             ans=max(ans,helper(i+1,j+x,k+y,grid));
    //         }
    //     }
    //     return dp[i][j][k]= grid[i][j]+(j==k?0:grid[i][k])+ans;
    // }
    // int ans=0;
    // int helper(int i,int j,int n,int m,int curr,vector<vector<int>>& g){
    //     if(i>n){
    //         return curr;
    //     }
    //     //cout<<curr<<endl;
    //     g[i][j]=0;
    //     if(i+1<n){
    //         int ok=0;
    //         int ok1=0;
    //         if(j+1<m){
    //             ok= helper(i+1,j+1,n,m,g[i+1][j+1],g);
    //         }
    //         if(j-1>=0){
    //             ok1=helper(i+1,j-1,n,m,g[i+1][j-1],g);
    //         }
    //         //cout<<curr<<endl;
    //         return curr+max(helper(i+1,j,n,m,g[i+1][j],g),max(ok,ok1));
    //         cout<<curr<<endl;
    //     }
    //     return curr;
    // }
    // int cherryPickup(vector<vector<int>>& g) {
    //     n=g.size();
    //     m=g[0].size();
    //     memset(dp,-1,sizeof(dp));
    //     return helper(0,0,m-1,g);
    // }
};