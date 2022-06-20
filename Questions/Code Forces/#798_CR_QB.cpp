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
    vector<ll> v1;
    for(ll i =0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
        v1.push_back(a);
    } 
    map<ll,ll> m;
    for(ll i =0;i<n;i++)
    {
        if(v[i]!=i+1 && m[i+1]==0)
        {
            v[i]=i+1;
            m[i+1]++;
        }
        else if(v[i]==i+1 && m[i+2]==0)
        {
            v[i]=i+2;
            m[i+2]++;
        }

    }
    for(ll i = 0;i<n;i++)
    {
        if(v[i]==v1[i]){
            swap(v[i-1],v[i]);
        }
    }
    for(ll i = 0;i<n;i++)
    {
        if(v[i]==v1[i]){
            cout<<-1<<endl;
            return;
        }
    }
    for(ll i = 0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _=1;
    cin >> _;
    while(_--){
        solve();
    }
    return 0;
}