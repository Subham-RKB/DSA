// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int ans=0;
    void  dfs(vector<vector<int>>&G,vector<int> &v,int id,int k){
        if(id==G.size()){
            ans=max(ans,k);
            return;
        }
        if(ans!=G[0].size() && k+G.size()-id>ans)
        {
            for(int j=0;j<G[id].size();j++){
                if(v[j]==0){
                    v[j]=1;
                    dfs(G,v,id+1,k+1);
                    v[j]=0;
                }
                else{
                    dfs(G,v,id+1,k);
                }
            }
        }
    }
	int maximumMatch(vector<vector<int>>&G){
	    vector<int> v(101);
	    dfs(G,v,0,0);
	    return ans;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int m, n;
		cin >> m >> n;
		vector<vector<int>>G(m, vector<int>(n, 0));
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++)
				cin >> G[i][j];
		}
		Solution obj;
		int ans = obj.maximumMatch(G);
		cout << ans << "\n";    
	}
	return 0;
}  // } Driver Code Ends