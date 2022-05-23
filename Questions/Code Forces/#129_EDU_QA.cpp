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
    int n,m;
    cin>>n;
    int a;
    int alice = 0;
    int bob =0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        alice = max(alice,a);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a;
        bob = max(a,bob);
    }
    if(alice>bob){
        cout<<"Alice"<<endl;
        cout<<"Alice"<<endl;
    }
    else if(bob>alice){
        cout<<"Bob"<<endl;
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
        cout<<"Bob"<<endl;
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