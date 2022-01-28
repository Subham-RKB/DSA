// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    int n;
    bool helper(vector<int> g[],int i,vector<int>& vis,int count){
        if(count==n) return true;
        vis[i]=true;
        for(auto& j:g[i]){
            if(vis[j]==0 && helper(g,j,vis,count+1)) return true;
        }
        vis[i]=false;
        return false;
    }
    bool check(int N,int M,vector<vector<int>> Edges)
    {
        n=N;
        // code here
        vector<int> m[N+1];
        vector<int> vis(N+1,0);
        for(int i=0;i<Edges.size();i++){
            m[Edges[i][0]].push_back(Edges[i][1]);
            m[Edges[i][1]].push_back(Edges[i][0]);
        }
        for(int i=1;i<=N;i++){
            if(helper(m,i,vis,1)) return true;
        }
        return false;
    }
};
 

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}  // } Driver Code Ends