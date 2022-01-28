// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  void dfs(vector<vector<int>>& graph,int id,vector<int>& vis){
      vis[id]=1;
      for(int i=0;i<graph[id].size();i++){
          if(!vis[graph[id][i]]){
              dfs(graph,graph[id][i],vis);
          }
      }
  }
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<vector<int>> graph(V);
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            vector<int> temp;
            for(int j=0;j<V;j++){
                if(adj[i][j] && i!=j)temp.push_back(j);
            }
            graph[i]=temp;
        }
        int count=0;
        for(int i=0;i<V;i++){
            if(!vis[i]) {dfs(graph,i,vis);count++;}
        }
        return count;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}  // } Driver Code Ends