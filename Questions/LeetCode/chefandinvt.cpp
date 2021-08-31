#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n,p,k;
	    cin>>n>>p>>k;
	    if(p==k){
	        cout<<2<<endl;
	    }
	    else{
	        n=n-1;
	        int r=n%k;//1
	        int a=p%k;//2
	        int d=n/k;//1
	        int ans=0;
	        if(a<=r){
	            ans=(a)*(d+1);
	            ans=ans+((p/k)+1);
	        }
	        else{
	            ans=(r+1)*(d+1);
	            ans=ans+(d*(a-1-r)+((p/k)+1));
	        }
	        cout<<ans<<endl;
	    }
	}
	return 0;
}


