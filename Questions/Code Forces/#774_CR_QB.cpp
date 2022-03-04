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
    sort(v.begin(),v.end());
    ll s=0;
    ll e=n-1;
    ll blue=0;
    ll red=0;
    ll countBlue=0;
    ll countRed=0;
    while(s<=e)
    {
        if(blue>=red){
            red+=v[e];
            countRed++;
            e--;
        }
        else{
            blue+=v[s];
            countBlue++;
            s++;
        }
        if(red>blue && countBlue>countRed){
            cout<<"YES"<<endl;
            return;
        }
    }
    //cout<<blue<<" "<<red<<endl;
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