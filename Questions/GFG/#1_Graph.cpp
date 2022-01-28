// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// Back-end complete function Template for C++

class Solution{
public:
    void helper(vector<vector<int>>& graph,vector<vector<int>> &ans,int id,int j){
        ans[id][j]=1;
        for(int i=0;i<graph.size();i++){
            if(graph[j][i]==1 && ans[id][i]==0) helper(graph,ans,id,i);
        }
    }
    vector<vector<int>> transitiveClosure(int V, vector<vector<int>> graph)
    {
        vector<vector<int>> ans(V,vector<int>(V,0));
        for(int i=0;i<V;++i){
            for(int j=0;j<V;++j){
                if(graph[i][j]==1) helper(graph,ans,i,j);
            }
        }
        for(int i=0;i<V;i++){
            ans[i][i]=1;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j=0;j<N;j++)
            cin>>graph[i][j];
        
        Solution ob;
        vector<vector<int>> ans = ob.transitiveClosure(N, graph);
        for(int i = 0;i < N;i++)
            {for(int j = 0;j < N;j++)
                cout<<ans[i][j]<<" ";
        cout<<"\n";}
    }
    return 0;
}  // } Driver Code Ends