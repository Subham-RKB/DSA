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
    ll n,m,a;
    cin>>n>>m;
    ll mx = INT_MIN;
    ll x = 0;
    ll y = 0;
    for(ll i=1;i<=n;i++)
    {
        for(ll j =1;j<=m;j++)
        {
            cin>>a;
            if(a>mx)
            {
                x=i;
                y=j;
                mx=a;
            }
        }
    }
    //cout<<x<<" "<<y<<endl; 
    cout<<max(x*y,max((x*(m-y+1)),max((y*(n-x+1)),((n-x+1)*(m-y+1)))))<<endl;
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