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
    int minusone=0;
    ll odd=0;
    ll even=0;
    ll oddCount=0;
    ll evenCount=0;
    ll mx=INT_MIN;
    ll answer=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(i!=0 && i!=n-1)
        {
            mx= max(mx,a);
            answer+=(a+1)/2;
        }
    }
    if(mx==1 || (n==3 && mx%2!=0)) answer=-1;
    cout<<answer<<endl;

}
// 3 4/2 (5+1)/2 6/2 (7+1)/2 8/2 9 

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