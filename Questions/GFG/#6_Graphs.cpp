// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    int graph[26][26];
    void dfs(int v,vector<bool>& vis){
        vis[v]=true;
        for(int i=0;i<26;i++){
            if(graph[v][i] && !vis[i]){
                dfs(i,vis);
            }
        }
    }
    int isCircle(int N, vector<string> A)
    {
        memset(graph,0,sizeof(graph));
        vector<int> in(26,0);
        vector<int> out(26,0);
        for(int i=0;i<N;i++){
            int a = A[i][0]-'a';
            int b = A[i].back()-'a';
            in[a]++;
            out[b]++;
            graph[a][b]=1;
        }
        for(int i=0;i<26;i++){
            if(in[i]!=out[i]){
                return 0;
            }
        }
        vector<bool> vis(26,false);
        int i;
        for(i=0;i<26;i++){
            if(in[i]){
                break;
            }
        }
        dfs(i,vis);
        for(int i=0;i<26;i++){
            if(in[i] && vis[i]==false) return 0;
        }
        return 1;
    }
    
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<string> A;
        string s;
        
        for(int i = 0;i < N; i++)
        {
            cin>>s;
            A.push_back(s);
        }
        
        Solution ob;
        cout<<ob.isCircle(N, A)<<endl;
    }
    return 0;
}  // } Driver Code Ends