// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    int n = grid.size();
	    int m = grid[0].size();
	    queue<pair<int,pair<int,int>>> q;
	    vector<vector<int>> ans(n,vector<int>(m,0));
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(grid[i][j]==0){
	                ans[i][j]=INT_MAX;
	            }
	            else{
	                q.push({0,{i,j}});
	            }
	        }
	    }
	    int dx[]={-1,0,+1,0};
	    int dy[]={0,+1,0,-1};
	    while(!q.empty()){
	        int x = q.front().second.first;
	        int y = q.front().second.second;
	        int d = q.front().first;
	        q.pop();
	        for(int i=0;i<4;i++){
	            int nX = x+dx[i];
	            int nY = y+dy[i];
	            if(nX>=0 && nX<n && nY>=0 && nY<m && 1+d<ans[nX][nY]){
	                ans[nX][nY]=1+d;
	                q.push({1+d,{nX,nY}});
	            }
	        }
	    }
	    return ans;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends