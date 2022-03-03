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
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    if(is_sorted(v.begin(),v.end())){
        cout<<"Yes"<<endl;
        return;
    }
    ll odd=0;
    ll even=0;
    for(int i=0;i<n;i++)
    {
        if(i==0){
            if(v[i]%2!=0)
            {
                odd=v[i];
            }
            else{
                even=v[i];
            }
        }
        else{
            if(v[i]%2==0 && v[i]<even)
            {
                cout<<"No"<<endl;
                return;
            }
            else if(v[i]%2==0 && v[i]>even){
                even=v[i];
            }
            if(v[i]%2!=0 && v[i]<odd)
            {
                cout<<"No"<<endl;
                return;
            }
            else if(v[i]%2!=0 && v[i]>odd){
                odd=v[i];
            }
        }
    }
    cout<<"Yes"<<endl;
}
// 5 9 2 2 9 10
// 5 2 9 2 9 10
// 5 2 2 9 9 10
// 2 5 2 9 9 10
// 2 2 5 9 9 10

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