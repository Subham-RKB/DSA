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
    ll n;
    cin>>n;
    vi a;
    rep(i,n){
        ll aa;
        cin>>aa;
        a.push_back(aa);
    }
    if(a[0]!=n && a[n-1]!=n){
        cout<<-1<<endl;
    }
    else{
        n=n-1;
        for(int i=n/2;i>=0;i--){
            cout<<a[i]<<" ";
        }
        for(int i=n;i>n/2;i--){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    // ll a,b;
    // cin>>a>>b;
    // //cout<<min((a+b)/4,min(a,b))<<endl;
    // // ll a,b;
    // // cin>>a>>b;
    // if(a==0 || b==0){
    //     cout<<0<<endl;
    // }
    // else if(a<4 && b<4){
    //     cout<<1<<endl;
    // }
    // else{
    //     cout<<min((a+b)/4,min(a,b))<<endl;
    // }
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