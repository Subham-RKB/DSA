// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    // bool dfs(int V,int C,vector<int>& vis,vector<int> adj[],vector<int>& color){
    //     vis[V]=1;
    //     color[V]=C;
    //     for(auto& i: adj[V]){
    //         if(vis[i]==0){
    //             if(dfs(i,(C+1)%2,vis,adj,color)==false) return false;
    //         }
    //         else {
    //             if(color[V]==color[i]){
    //                 return false;
    //             }
    //         }
    //     }
    //     return true;
    // }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	   // vector<int> vis(V,0);
	   vector<int> color(V,-1);
	   // for(int i=0;i<V;i++){
	   //     if(!vis[i]){
	   //         if(!dfs(i,0,vis,adj,color)) 
	   //             return false;
	   //     }
	   // }
	   // return true;
	   for(int i=0;i<V;i++){
	       if(color[i]!=-1) continue;
	       queue<int> q;
	       q.push(i);
	       color[i]=1;
	       while(!q.empty()){
	           int r= q.front();
	           q.pop();
	           for(auto& j:adj[r]){
	               if(color[j]==-1) {
	                    if(color[r]==1)
	                    {
	                        color[j]=0;
	                    }
	                    else {
	                        color[j]=1;
	                    }
	                    q.push(j);
	                    continue;
	               }
	               if(color[r]==color[j]) return false;
	           
	           }
	       }
	   }
	   return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends