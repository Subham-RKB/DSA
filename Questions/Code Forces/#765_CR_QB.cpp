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
    ll n,a;
    cin>>n;
    unordered_map<ll,ll> m;
    ll k=0;
    int t=0;
    ll ans=INT_MIN;
    vector<int> v;
    for(ll i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
        if(m.find(a)==m.end()){
            m[a]=i;
        }
        else{
            t=1;
            k=n-(i)+m[a];
            m[a]=i;
            
        }
        if(k>ans){
            ans=k;
        }
    }
    reverse(v.begin(),v.end());
    unordered_map<ll,ll> m1;
    for(ll i = 0;i<v.size();i++){
        if(m1.find(v[i])==m1.end()){
            m1[v[i]]=i;
        }
        else{
            k = n - (i) +m1[v[i]];
            m1[v[i]]=i;
        }
        if(k>ans){
            //cout<<i<<endl;
            ans=k;
        }
    }
    if(t) cout<<ans<<endl;
    else cout<<-1<<endl;
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