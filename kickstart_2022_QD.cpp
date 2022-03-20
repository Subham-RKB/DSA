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
ll product(ll ok)
{
    ll s=1;
    while(ok>0)
    {
        s*=(ok%10);
        ok/=10;
    }
    return s;
}
ll sums(ll ok)
{
    ll s=0;
    while(ok>0)
    {
        s+=(ok%10);
        ok/=10;
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll _;
    cin >> _;
    ll t=1;
    while(t<=_){
        ll a,b;
        cin>>a>>b;
        ll count=0;
        for(ll i = a;i<=b;i++)
        {
            if(product(i)%sums(i)==0)
            {
                count++;
            }
        }
        cout<<"Case #"<<t<<": "<<count<<endl;
        t++;
    }
    return 0;
}