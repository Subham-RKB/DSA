class Solution {
public:
    vector<int> dir={0,1,0,-1,0};
    bool dfs(vector<vector<char>>& grid,vector<vector<bool>>& visited,int i,int j,int x,int y){
        visited[i][j]=true;
        for(int d=0;d<4;++d){
            int a=i+dir[d];
            int b=j+dir[d+1];
            if(a>=0 && a<grid.size() && b>=0 && b<grid[0].size() && grid[a][b]==grid[i][j] && !(x==a && y==b)){
                if(visited[a][b] || dfs(grid,visited,a,b,i,j))
                    return true;
            }
        }
        return false;
        // if(i<0 || i>n-1 || j<0 ||j>m-1 || grid[i][j]!=a || (i==b && j==c)) return false;
        // //if(grid[i][j]=='*') return true;
        // grid[i][j]='*';
        // if(grid[i][j]=='*' || dfs(grid,i+1,j,i,j,n,m,a)) return true;
        // //if(grid[i][j]==a) return true;
        // //if(i==b && j==c) return true;
        // if(grid[i][j]=='*' || dfs(grid,i-1,j,i,j,n,m,a)) return true;
        // //if(grid[i][j]==a) return true;
        // //if(i==b && j==c) return true;
        // if(grid[i][j]=='*' || dfs(grid,i,j-1,i,j,n,m,a)) return true;
        // //if(grid[i][j]==a) return true;
        // //if(i==b && j==c) return true;
        // if(grid[i][j]=='*' || dfs(grid,i,j+1,i,j,n,m,a)) return true;
        // //if(grid[i][j]==a) return true;
        // //grid[i][j]=a;
        // //if(i==b && j==c) return true;
        // return false;
    }
    bool containsCycle(vector<vector<char>>& grid) {
        int n = grid.size();
        int m=grid[0].size();
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                //char a=grid[i][j];
                //grid[i][j]='*';
                if(!visited[i][j] && dfs(grid,visited,i,j,-1,-1)){
                    return true;
                }
               // grid[i][j]=a;
            }
        }
        return false;
    }
};