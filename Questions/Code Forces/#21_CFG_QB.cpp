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
    vector<ll> v(n);
    ll zero = 0;
    for(ll i =0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==0)
        {
            zero++;
        }
    }
    if(zero==0)
    {
        cout<<1<<endl;
        return;
    }
    if(zero==n)
    {
        cout<<0<<endl;
        return;
    }
    ll i =0;
    ll j =n-1;
    while(i<n && v[i]==0)
    {
        i++;
    }
    while(j>=0 && v[j]==0)
    {
        j--;
    }

    for(ll k =i;k<=j;k++)
    {
        if(v[k]==0){
            cout<<2<<endl;
            return;
        }
    }
    cout<<1<<endl;
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