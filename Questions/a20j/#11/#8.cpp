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
    string s;
    cin>>s;
    if(s[0]>='A' && s[0]<='Z'){
        cout<<s<<endl;
    }
    else{
        s[0]=char(65+(((int)s[0])-97));
        cout<<s<<endl;; 
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _=2;
    // cin >> _;
    while(_--){
        solve();
    }
    return 0;
}