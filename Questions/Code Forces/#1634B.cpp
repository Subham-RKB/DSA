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
    ll n,x,y,a;
    cin>>n>>x>>y;
    vector<ll> v;
    int countOdd=0;
    rep(i,n)
    {
        cin>>a;
        v.push_back(a);
        countOdd+=(a%2);
    }
    if(countOdd%2==0)
    {
        if(y%2==x%2)
        {
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
    else{
        if(y%2!=x%2)
        {
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }

}
// 001 010 (110 100) (10)  
// 1 2 3 4
// 1 3 6   
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