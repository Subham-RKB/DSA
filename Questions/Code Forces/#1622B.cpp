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
    vector<ll> v;
    vector<ll> pos(n+1);
    for(ll i=0;i<n;i++){ 
        cin>>a;
        v.push_back(a);
        pos[a]=i+1;
    }
    string s;
    cin>>s;
    ll z=1;
    ll o=1;
    for(ll i=0;i<s.length();i++){
        if(s[i]=='0') ++z;
    }
    vector<ll> ans(n+1);
    for(ll i=1;i<=s.length();i++){
        if(s[pos[i]-1]=='0'){
            ans[pos[i]]=o;
            ++o;
        }
        else{
            ans[pos[i]]=z;
            ++z;
        }
    }
    for(ll i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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