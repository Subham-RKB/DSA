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
    string ss="";
    string t="";
    ll h=-1;
    for(ll i=0;i<n-1;i++){
        if(s[i]-'a'>s[i+1]-'a'){
            ss+=s[i];
            t=s[i]+t;
        }
        else if(s[i]-'a'==s[i+1]-'a'){
            if(s[0]-'a'>s[i]-'a'){
                ss+=s[i];
                t=s[i]+t;
            }
            else{
                h=i;
                break;
            }
        }
        else{
            h=i;
            break;
        }
    }
    if(h==-1) h=n-1;
    ss+=s[h];
    t=s[h]+t;
    cout<<ss+t<<endl;

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