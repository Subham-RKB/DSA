class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int matrix[r][c];
        matrix[0][0]=grid[0][0];
        for(int i=1;i<r;i++){
            matrix[i][0]=matrix[i-1][0]+grid[i][0];
        }
        for(int i=1;i<c;i++){
            matrix[0][i]=matrix[0][i-1]+grid[0][i];
        }
        for(int i=1;i<r;i++){
            for(int j=1;j<c;j++){
                matrix[i][j]=min((grid[i][j]+matrix[i-1][j]),(grid[i][j]+matrix[i][j-1]));
            }
        }
        return matrix[r-1][c-1];
    }
};