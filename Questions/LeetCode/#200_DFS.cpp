class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int island=0;
        int offsets[]={0,1,0,-1,0};
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1'){
                    island++;
                    grid[i][j]='0';
                    queue<pair<int,int>> q;
                    q.push(make_pair(i,j));
                    while(!q.empty()){
                        pair<int,int> p=q.front();
                        q.pop();
                        for(int k=0;k<4;k++){
                            int ro=p.first+offsets[k],co=p.second+offsets[k+1];
                            if(ro>=0 && ro<r && co>=0 && co<c && grid[ro][co]=='1'){
                                grid[ro][co]='0';
                                q.push(make_pair(ro,co));
                            }
                        }
                    }
                }
            }
        }
        return island;
    }
};