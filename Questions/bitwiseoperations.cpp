#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int max=10000000;
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        if(a<max){
	            max=a;
	        }
	        v.push_back(a);
	    }
	    int ans;
	    for(int i=0;i<n;i++){
	        ans=ans | (max^v[i]);
	    }
	    cout<<max<<" "<<ans<<endl;
	}
	return 0;
}
