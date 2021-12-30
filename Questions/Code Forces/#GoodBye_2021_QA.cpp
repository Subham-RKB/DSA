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
    vector<int> v(101,0);
    int a;
    int k=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a!=0){
            v[abs(a)]++;
            // if(a>0){
            //     v[a]++;
            // }
            // else{
            //     v[abs(a)+100]++;
            // }
        }
        else{
            k=1;
        }
    }
    int ans=0;
    for(int i=0;i<101;i++){
        if(v[i]>1){
            ans=ans+2;
        }
        else if(v[i]==1){
            ans=ans+1;
        }
    }

    // int ans=0;
    // for(int i=0;i<101;i++){
    //     if(v[i]!=0){
    //         if(v[i+100]!=0){
    //             ans=ans+2;
    //         }
    //         else{
    //             if(v[i]>1){
    //                 ans=ans+2;
    //             }
    //             else{
    //                 ans=ans+1;
    //             }
    //         }
    //     }
    // }
    if(k) cout<<ans+1<<endl;
    else cout<<ans<<endl;
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