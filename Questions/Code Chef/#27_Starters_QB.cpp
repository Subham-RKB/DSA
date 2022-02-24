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
    string s;
    cin>>s;
    ll count =1;
    char c=s[0];
    for(ll i=1;i<n;i++){
        if(c!=s[i]){
            count++;
            c=s[i];
        }
    }
    cout<<count<<endl;
    // vector<string> v1;
    // vector<string> v2;
    // string vv="";
    // for(int i=0;i<n;i++){
    //     v1.push_back(vv);
    //     vv+=s[i];
    // }
    // vv="";
    // for(int i=n-1;i>=0;i--){
    //     v2.push_back(vv);
    //     vv=s[i]+vv;
    // }
    // reverse(v2.begin(),v2.end());
    // set<string> S;
    // for(int i=0;i<n;i++){
    //     //cout<<v1[i]+v2[i]<<endl;
    //     S.insert(v1[i]+v2[i]);
    // }
    // cout<<S.size()<<endl;
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