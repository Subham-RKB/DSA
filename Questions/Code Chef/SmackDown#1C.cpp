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
    int one=0;
    vector<int> v(n);
    vector<int> ans(n);
    set<int> s;
    sort(v.begin(),v.end());
    rep(i,n){
        cin>>v[i];
        if(v[i]==1){
            one=1;
        }
    }
    if(one==1){
        s.insert(0);
    }
    rep(i,n){
        int a=0;
        if(v[i]==1){
            ans[i]=0;
        }
        else{
            v[i]=v[i]-1;
            while(v[i]>=0){
                if(s.find(v[i])==s.end()){
                    s.insert(v[i]);
                    ans[i]=v[i];
                    a=1;
                    break;
                }
                v[i]--;
            }
            if(a==0) ans[i]=v[i]+1;
        }
    }
    rep(i,n){
        cout<<ans[i]<<" ";
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