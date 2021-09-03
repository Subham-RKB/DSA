class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int r= grid.size();
        int c= grid[0].size();
        int peri=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int s=0;
                if(grid[i][j]==1){
                    if(i-1>=0 && grid[i-1][j]==1) s++;
                    if(i+1<r && grid[i+1][j]==1) s++;
                    if(j-1>=0 && grid[i][j-1]==1) s++;
                    if(j+1<c && grid[i][j+1]==1) s++;
                    peri=peri+(4-s);
                    //cout<<peri<<endl;
                }
                else{
                    continue;
                }
                
            }
        }
        return peri;
    }
};