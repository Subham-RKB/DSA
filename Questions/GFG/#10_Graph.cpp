// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(vector<int> adj[],vector<int>& vis,int i){
        if(vis[i]==1){
            return true;
        }
        vis[i]=1;
        for(auto&j:adj[i]){
            if(vis[j]!=2)
            {
                if(dfs(adj,vis,j)){
                    return true;
                }
            }
        }
        vis[i]=2;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(vis[i]==0 && dfs(adj,vis,i)){
                return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends