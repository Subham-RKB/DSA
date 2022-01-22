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
int countOdd(int L, int R){
 
    int N = (R - L) / 2;
    if (R % 2 != 0 || L % 2 != 0)
        N += 1;
 
    return N;
}
void solve(){
    ll a,b,k;
    cin>>a>>b>>k;
    if(a==b && a!=1){
        cout<<"YES"<<endl;
        return;
    }
    else if(a==b && a==1){
        cout<<"NO"<<endl;
        return;
    }
    ll kk=0;
    ll ans=0;
    ans=countOdd(a,b);
    if(ans<=k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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