// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& p) {
	    vector<int> indegree(N,0);
	    vector<vector<int>> graph(N);
	    for(int i=0;i<p.size();i++){
	        graph[p[i].second].push_back(p[i].first);
	        indegree[p[i].first]++;
	    }
	    queue<int> q;
	    for(int i=0;i<N;i++){
	        if(indegree[i]==0){
	            q.push(i);
	        }
	    }
	    while(!q.empty()){
	        int n= q.front();
	        q.pop();
	        N--;
	        for(auto& i:graph[n]){
	            if(--indegree[i]==0){
	                q.push(i);
	            }
	        }
	    }
	    return N==0;
	}
};
// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends