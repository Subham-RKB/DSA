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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll white  = 0;
    ll ans = INT_MAX;
    for(int i=0;i<k;i++)
    {
        if(s[i]=='W') white+=1;
    }
    //cout<<white<<endl;
    ans = white;
    if(n==k){
        cout<<white<<endl;
        return;
    }
    ll st = 0;
    ll e = k;
    while(e<n)
    {
        if(s[e]=='W'){
            white+=1;
        }
        if(s[st]=='W'){
            white-=1;
        }
        //cout<<white<<endl;
        ans = min(ans,white);
        e++;
        st++;
    } 
    cout<<ans<<endl;
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