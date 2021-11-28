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
    // ll n,k;
    // cin>>n;
    // ll m=INT_MAX;
    // for(ll i=n+1;i<2*n;i++){
    //     ll ans=lcm(n,i);
    //     if(m>ans){
    //         m=ans;
    //         k=i;
    //     }
    // }
    // cout<<k<<endl;
    ll n;
    cin>>n;
    vector<ll> v;
    ll a;
    for(ll i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    int aa=v[0];
    int c=1;
    int e=0;
    for(int i=c-1;i<n;i++){
        while(aa*((c)-i+1)-v[c]>0) {
            c++;
        }
        e+=aa*((c)-i+1)-v[c];
        i=c-1;
        aa=v[i];
    }
    if(e>0){
        cout<<e<<endl;
    }
    else{
        cout<<0<<endl;
    }
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