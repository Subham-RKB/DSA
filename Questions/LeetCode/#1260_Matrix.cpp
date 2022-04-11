class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
//         int n = grid.size();
//         int m = grid[0].size();
//         while(k--){
//             for(int i = 0;i < n; i++)
//             {
//                 for(int j = 0;j < m; j++)
//                 {
//                     if(i==0 && j==0)
//                     {
//                         swap(grid[i][j],grid[n-1][m-1]);
//                     }
//                     else if(i==n-1 && j== m-1)
//                     {
//                         swap(grid[i][j],grid[0][0]);
//                     }
//                     else if(j==m-1)
//                     {
//                         swap(grid[i][j],grid[i+1][0]);
//                     }
//                     else{
//                         swap(grid[i][j],grid[i][j+1]);
//                     }
                    
//                 }
//             }
//         }
//         return grid;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> ans(n,vector<int>(m));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                int newJ=(j+k)%m; // (j + numbers of columns added)%m
                
                int newI=(i+(j+k)/m)%n; // (i + numbers of rows added)%n 
                
                ans[newI][newJ]=grid[i][j];
            }
        }
        return ans;
    }
};