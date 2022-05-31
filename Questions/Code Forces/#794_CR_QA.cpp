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

bool check(vector<ll>& v)
{
    ll a = v[0];
    for(ll i =1;i<v.size();i++)
    {
        if(a!=v[i]){
            return false;
        }
    }
    return true;
}
void solve(){
    ll n,a;
    cin>>n;
    vector<ll> v;
    for(ll i =0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    if(check(v))
    {
        cout<<"YES"<<endl;
        return;
    }
    ll sum = accumulate(v.begin(),v.end(),0);
    ll k =sum;
    for(ll i =0;i<n;i++)
    {
        sum-=v[i];
        //cout<<sum<<endl;
        if((1.0*sum/(n-1))==v[i]){
            cout<<"YES"<<endl;
            return;
        }
        sum=k;
    }
    cout<<"NO"<<endl;

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