#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    vector<int> va;
	    vector<int> vb;
	    for(long long int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        va.push_back(a);
	    }
	    for(long long int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        vb.push_back(a);
	    }
	    int ii=0;
	    int a=(va[0]+vb[0])%n;
	    for(int i=1;i<n;i++){
	        if(a>((va[0]+vb[i])%n)){
	            a=(va[0]+vb[i])%n;
	            ii=i;
	        }
	    }
	    vector<int> ans;
	    for(int i=0;i<n;i++){
	        if(ii>=n){
	            ii=0;
	        }
	        ans.push_back((va[i]+vb[ii])%n);
	        ii++;
	    }
	    for(int i=0;i<n;i++){
	        cout<<ans[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
