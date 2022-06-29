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
 
void check(vector<ll>& v)
{
    ll n = v.size();
    for(ll i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    map<ll,ll> mp;
    ll neg  = 0;
    ll pos = 0;
    ll zero = 0;
    for(ll i =0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]]=1;
        if(v[i]<0){
            neg++;
        }
        else if(v[i]>0)
        {
            pos++;
        }
        else{
            zero++;
        }
    }
    if(zero==n || zero==n-1){
        cout<<"YES"<<endl;
        return;
    }
    if(neg>=2 && neg+zero>=3)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(pos>=2 && pos+zero>=3){
        cout<<"NO"<<endl;
        return;
    }
    int zero1 =0;
    vector<ll> v1;
    for(ll i =0;i<n;i++)
    {
        if(v[i]==0 && zero1==0)
        {
            v1.push_back(0);
            zero1++;
        }
        else if(v[i]!=0){
            v1.push_back(v[i]);
        }
    }
    //check(v1);
    n = v1.size();
    for(ll i=0;i<n-2;i++)
    {
        for(ll j=i+1;j<n-1;j++)
        {
            for(ll k =j+1;k<n;k++)
            {
                if(mp.find(v1[i]+v1[j]+v1[k])==mp.end())
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"YES"<<endl;
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