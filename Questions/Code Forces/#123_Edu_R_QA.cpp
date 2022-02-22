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
    int r=0;
    int b=0;
    int g=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='r'){
            r=1;
        }
        if(s[i]=='b'){
            b=1;
        }
        if(s[i]=='g'){
            g=1;
        }
        if(s[i]=='B'){
            if(b!=1){
                cout<<"NO"<<endl;
                return;
            }
        }
        if(s[i]=='R'){
            if(r!=1){
                cout<<"NO"<<endl;
                return;
            }
        }
        if(s[i]=='G'){
            if(g!=1){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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