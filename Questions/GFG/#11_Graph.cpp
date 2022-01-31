// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    bool dfs(int i,int j,vector<vector<int>>& grid){
        if(i>=grid.size() || i<0 || j>=grid[0].size() || j<0 || grid[i][j]==0) return false;
        if(grid[i][j]==2) return true;
        int x= grid[i][j];
        grid[i][j]=0;
        return dfs(i,j+1,grid)||dfs(i,j-1,grid)||dfs(i+1,j,grid)||dfs(i-1,j,grid);
        grid[i][j]=x;
    }
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1) return dfs(i,j,grid);
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends