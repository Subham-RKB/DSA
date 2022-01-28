// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  void helper(int i,int j,vector<vector<char>>& graph,int n,int m){
      if(i>n-1 || i<0 || j>m || j<0 || graph[i][j]!='1') return;
      graph[i][j]='#';
      helper(i+1,j,graph,n,m);
      helper(i-1,j,graph,n,m);
      helper(i,j+1,graph,n,m);
      helper(i,j-1,graph,n,m);
      helper(i-1,j-1,graph,n,m);
      helper(i+1,j+1,graph,n,m);
      helper(i-1,j+1,graph,n,m);
      helper(i+1,j-1,graph,n,m);
  }
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m= grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    helper(i,j,grid,n,m);
                }
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends