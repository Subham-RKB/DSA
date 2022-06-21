class Solution {
public:
    // int l = 0;
    // bool helper(vector<vector<int>>& grid,int i,int j,int n,int m,int k)
    // {
    //     if(i<0 || i>=n || j<0 || j>=m){
    //         return false;
    //     }
    //     if(grid[i][j]==0) return true;
    //     grid[i][j]=0;
    //     l=k;
    //     bool ok = helper(grid,i-1,j,n,m,k+1) & helper(grid,i+1,j,n,m,k+1) & helper(grid,i,j-1,n,m,k+1) & helper(grid,i,j+1,n,m,k+1);
    //     return (ok);
    // }
    void dfs(vector<vector<int>>& grid,int i,int j)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]!=1) return;
        grid[i][j]=0;
        dfs(grid,i-1,j);
        dfs(grid,i+1,j);
        dfs(grid,i,j-1);
        dfs(grid,i,j+1);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i*j==0 || i==n-1 || j==m-1)
                {
                    dfs(grid,i,j);
                }
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans+=grid[i][j];
            }
        }
        return ans;
    }
};