class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        int matrix[m][n];
        if(obstacleGrid[0][0]==1) return 0;
        bool flag=false;
        for(int i=0;i<m;i++){
            if(obstacleGrid[i][0]==1){
                matrix[i][0]=1;
                flag=true;
            }
            if(flag){
                matrix[i][0]=0;
            }
            else{
                matrix[i][0]=1;
            }
        }
        bool flags=false;
        for(int i=0;i<n;i++){
            if(obstacleGrid[0][i]==1){
                matrix[0][i]=1;
                flags=true;
            }
            if(flags){
                matrix[0][i]=0;
            }
            else{
                matrix[0][i]=1;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                    if(obstacleGrid[i][j]==1){
                        matrix[i][j]=0;
                    } 
                        else
                        {matrix[i][j]=matrix[i][j-1]+matrix[i-1][j];}
                        
                }
            }
        return matrix[m-1][n-1];
        
    }
};