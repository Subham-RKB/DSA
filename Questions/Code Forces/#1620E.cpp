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
    ll n,k,x,y;
    vector<vector<ll>> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        if(k==1){
            cin>>x;
            v.push_back({k,x});
        }
        else if(k==2){
            cin>>x>>y;
            v.push_back({k,x,y});
        }
    }
    vector<ll> vv(500001);
    for(int i=0;i<500001;i++){
        vv[i]=i;
    }
    vector<ll> ans; 
    for(int i=n-1;i>=0;i--){
        if(v[i].size()==2) ans.push_back(vv[v[i][1]]);
        else vv[v[i][1]]=vv[v[i][2]];
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
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