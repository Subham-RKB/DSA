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
    ll n; double m;
    cin>>n>>m;
    ll a=0;
    ll b;
    double ans=0;
    ll ans1=n;
    rep(i,n){
        cin>>b;
        if(b>m){
            if(ceil(b/m)>=ans){
                ans=ceil(b/m);
                ans1=i+1;
            }
        }
    }
    cout<<ans1<<endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _=1;
    // cin >> _;
    while(_--){
        solve();
    }
    return 0;
}