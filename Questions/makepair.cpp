#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    unordered_map<int,int> M;
	    int n;
	    cin>>n;
	    int a;
	    cin>>a;
	    M.insert(make_pair(a,1));
	    for(int i=1;i<n;i++){
	        cin>>a;
	        if(M.find(a)==M.end()){
	            M.insert(make_pair(a,1));
	        }
	        else{
	            M[a]++;
	        }
	    }
        for(auto s:M){
            cout<<s.first<<" "<<s.second<<endl;
        }
	    int ans=0;
	    for(auto s:M){
	        if(s.first-1>=s.second){
	            ans=ans+s.second;
	        }
	        else{
	            ans=ans+(s.first-1);
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
