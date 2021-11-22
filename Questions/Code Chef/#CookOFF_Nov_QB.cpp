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
    int one=0;
    int zero=0;
    int two=0;
    rep(i,n){
        cin>>a;
        if(a%3==0){
            zero=zero+(a/3);
        }
        else if(a%3==1){
            one++;
        }
        else{
            two++;
        }
    }
    if(one==0 && two==0){
        cout<<0<<endl;
    }
    else{
        ll ans=one>two?two:one;
        ll diff = abs(one-two);
        if(diff%3!=0){
            cout<<-1<<endl;
        }
        // else if(diff==0){
        //     cout<<one<<endl;
        // }
        else{
            ans=ans+(2*(diff/3));
            cout<<ans<<endl;
        }
        //cout<<ans<<endl;
    }

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