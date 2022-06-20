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
    ll n,aa;
    cin>>n;
    vector<ll> a;
    vector<ll> b;
    for(ll i = 0;i<n;i++)
    {
        cin>>aa;
        a.push_back(aa);
    }
    for(ll i = 0;i<n;i++)
    {
        cin>>aa;
        b.push_back(aa);
    }
    ll i = 0;
    vector<ll> ans;
    while(i<n)
    {
        if(i==0)
        {
            cout<<(b[i]-a[i])<<" ";
        }
        else{
            if(b[i-1]<=a[i]){
                cout<<(b[i]-a[i])<<" ";
            }
            else{
                //int k = 0;
                while(i<n && b[i-1]>a[i])
                {
                    cout<<(b[i]-b[i-1])<<" ";
                    i++;
                }
                i--;
            }
        }
        i++;
    }
    // for(int i = 0;i<n;i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
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