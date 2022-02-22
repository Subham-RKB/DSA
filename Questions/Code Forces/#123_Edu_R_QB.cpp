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
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        for(int j=i;j<=n;j++){
            cout<<j<<" ";
        }
        for(int j=i-1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        int k=i;
        if(i==2){
            k=3;
        }
        if(i==3){
            k=2;
        }
        cout<<k<<" ";
    }
    cout<<endl;
    for(int i=n;i>0;i--){
        cout<<i<<" ";
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