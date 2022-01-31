// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    void dfs(int i,int j,vector<vector<char>>& grid){
        if(i>=grid.size() || i<0 || j<0 || j>=grid[0].size() || grid[i][j]=='O')
        {
            return;
        }
        grid[i][j]='O';
        dfs(i+1,j,grid);
        dfs(i-1,j,grid);
        dfs(i,j-1,grid);
        dfs(i,j+1,grid);
    }
    //Function to find the number of 'X' total shapes.
    int xShape(vector<vector<char>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='X'){
                    dfs(i,j,grid);
                    count++;
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(grid[i][j]=='X'){
        //             count++;
        //             queue<pair<int,int>> q;
        //             q.push(make_pair(i,j));
        //             //grid[i][j]='0';
        //             while(!q.empty()){
        //                 pair<int,int> p=q.front();
        //                 int x=p.first;
        //                 int y=p.second;
        //                 q.pop();
        //                 grid[x][y]='0';
        //                 if(grid[x+1][y]=='X' && x+1<n){
        //                     //grid[x+1][y]='0';
        //                     q.push(make_pair(x+1,y));
        //                 }
        //                 if(grid[x-1][y]=='X' && x-1>=0){
        //                     //grid[x-1][y]='0';
        //                     q.push(make_pair(x-1,y));
        //                 }
        //                 if(grid[x][y+1]=='X' && y+1<m){
        //                     //grid[x][y+1]='0';
        //                     q.push(make_pair(x,y+1));
        //                 }
        //                 if(grid[x][y-1]=='X' && y-1>=0){
        //                     //grid[x][y-1]='0';
        //                     q.push(make_pair(x,y-1));
        //                 }
        //             }
        //         }
        //     }
        // }
        return count;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends