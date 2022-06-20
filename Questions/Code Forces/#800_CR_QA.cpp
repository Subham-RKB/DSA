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
    ll a,b;
    cin>>a>>b;
    string ans = "";
    if(a>b)
    {
        ll k =0;
        while(a>0 || b>0)
        {
            if((k%2==0 || b==0) && a!=0)
            {
                ans+='0';
                a--;
            }
            if(b!=0 && (k%2!=0 || a==0)){
                ans+='1';
                b--;
            }
            k++;
        }
    }
    else{
        ll k =0;
        swap(a,b);
        while(a>0 || b>0)
        {
            if((k%2==0 || b==0) && a!=0)
            {
                ans+='1';
                a--;
            }
            if(b!=0 && (k%2!=0 || a==0)){
                ans+='0';
                b--;
            }
            k++;
        }
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