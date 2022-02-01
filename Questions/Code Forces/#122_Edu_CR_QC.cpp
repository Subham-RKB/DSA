#include <bits/stdc++.h>
using namespace std;

#define rep(i,n)        for(auto i=0; i<(n); i++)
#define loop(i,a,b)     for(auto i=(a); i<(b); i++)
#define rloop(i,a,b)    for(auto i=a-1; i>=(b); i--) 
#define all(x)          x.begin(),x.end() 
#define len(x)          ((int)x.size()) 
#define sqr(x)          ((x)*(x))
#define mod             1000000007
#define pb              push_back
#define xx              first
#define yy              second
#define pcount          __builtin_popcount

typedef long long       ll; 
typedef string          st; 
typedef vector<int>     vi; 
typedef vector<string>      vs; 
typedef map<int,int>    mii; 
typedef map<string,int>     msi; 
typedef pair<int,int>   pii; 
typedef vector<pii>     vpii; 

void solve(){
    ll hc,dc,hm,dm,k,w,a;
    cin>>hc>>dc>>hm>>dm>>k>>w>>a;
    int s=0;
    for(ll i=0;i<=k;i++){
        ll dcc = (i)*w+dc;
        ll hcc = (k-i)*a+hc;
        if(ceil(1.0*hcc/dm)>=ceil(1.0*hm/dcc)){
            cout<<"YES"<<endl;
            s=1;
            break;
        }

    }
    if(s==0) cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _;
    cin >> _;
    while(_--){
        solve();
    }
    return 0;
}