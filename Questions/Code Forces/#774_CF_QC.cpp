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
//37 + 14
vector<ll> fact(15,INT_MIN);
int checkFact(ll n)
{
    for(int i=1;i<15;i++)
    {
        if(n==fact[i]){
            return 1;
        }
    }
    return 0;
}
int powerOf(ll n)
{
    int k =int(log2(n));
    ll kk = n- pow(2,k);
    if(kk==0){
        return 1;
    }
    return 0;
} 
void solve(){
    ll n;
    cin>>n;
    ll k = log2(n);
    int count=0;
    if(checkFact(n) || powerOf(n))
    {
        cout<<1<<endl;
        return;
    }
    while(n>0)
    {
        int k = int(log2(n));
        ll o =0;
        for(int i=0;i<14;i++)
        {
            if(fact[i]<n)
            {
                o=fact[i];
            }
            if(fact[i]==n)
            {
                cout<<count+1<<endl;
                return;
            }
        }
        ll p = pow(2,k);
        n-=max(p,o);
        count++;
    }
    if(n==0)
    {
        cout<<count<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fact[1]=1;
    for(ll i=2;i<15;i++)
    {
        fact[i]= fact[i-1]*i;
    }
    int _;
    cin >> _;
    while(_--){
        solve();
    }
    return 0;
}