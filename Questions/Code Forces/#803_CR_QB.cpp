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
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(ll i =0;i<n;i++)
    {
        cin>>v[i];
    }
    if(k==1)
    {
        cout<<ceil(1.0*(n-2)/2)<<endl;
        return;
    }
    ll ans = 0;
    for(ll i =1;i<n-1;i++)
    {
        if(v[i]>v[i-1]+v[i+1]){
            ans++;
        }
    }
    cout<<ans<<endl;
    
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