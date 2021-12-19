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
    ll w,h;
    cin>>w>>h;
    ll k1,k2,k3,k4;
    cin>>k1;
    int a;
    cin>>a;
    int b;
    for(int i=1;i<k1;i++){
        cin>>b;
    }
    int c;
    cin>>k2>>c;
    int d;
    for(int i=1;i<k2;i++){
        cin>>d;
    }
    int e;
    cin>>k3>>e;
    int f;
    for(int i=1;i<k3;i++){
        cin>>f;
    }
    int g,j;
    cin>>k4>>g;
    for(int i=1;i<k4;i++){
        cin>>j;
    }
    ll aa=(b-a)*h;
    ll bb=(d-c)*h;
    ll cc=(f-e)*w;
    ll dd=(j-g)*w;
    cout<<max(aa,max(bb,max(cc,dd)))<<endl;
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