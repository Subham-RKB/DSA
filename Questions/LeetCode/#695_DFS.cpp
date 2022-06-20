class Solution {
public:
    int helper(vector<vector<int>>& grid,int i,int j,int n,int m)
    {
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0) return 0;
        grid[i][j]=0;
        int k1 = 1 + helper(grid,i+1,j,n,m) + helper(grid,i-1,j,n,m) + helper(grid,i,j-1,n,m) + helper(grid,i,j+1,n,m);
        return (k1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = INT_MIN;
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0 ;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    ans = max(ans,helper(grid,i,j,n,m));
                }
            }
        }
        //cout<<ans<<endl;
        return ans==INT_MIN?0:ans;
    }
};