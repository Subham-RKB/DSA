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
    int n;
    cin>>n;
    vector<int> v;
    int one=0;
    int zero=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        if(a==1){
            one++;
        }
        if(a==0){
            zero++;
        }
    }
    int ans=one;
    int ans1=zero;
    for(int i=n-1;i>=n-one;i--){
        if(v[i]==1){
            ans--;
        }
    }
    for(int i=n-1;i>=n-zero;i--){
        if(v[i]==0){
            ans1--;
        }
    }
    cout<<ans<<" "<<ans1<<endl;
    cout<<min(ans,ans1)<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _=1;
    // cin >> _;
    while(_--){
        solve();
    }
    return 0;
}