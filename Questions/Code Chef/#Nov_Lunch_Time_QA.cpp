#include <bits/stdc++.h>
using namespace std;

#define rep(i,n)        for(auto i=0; i<(n); i++)
#define loop(i,a,b)     for(auto i=(a); i<(b); i++)
#define rloop(i,a,b)    for(auto i=a-1; i>=(b); i--) 
#define all(x)          x.begin(),x.end() 
#define len(x)          ((int)x.size()) 
#define sqr(x)          ((x)*(x))

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
long long calculate(long long p,
                    long long q)
{
    long long mod = 998244353, expo;
    expo = mod - 2;
 
    // Loop to find the value
    // until the expo is not zero
    while (expo) {
 
        // Multiply p with q
        // if expo is odd
        if (expo & 1) {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
 
        // Reduce the value of
        // expo by 2
        expo >>= 1;
    }
    return p;
}
void solve(){
    ll n;
    cin>>n;
    vector<int> v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    // int a=0;
    // for(int i=0;i<n;i++){
    //     a=a+((i+1)*v[i]);
    // }
    // int b=0;
    // int k=1;
    // for(int i=n-1;i>=0;i--){
    //     b=b+((k++)*v[i]);
    // }
    //cout<<a<<" "<<b<<endl;
    //cout<<(a+b)/2<<endl;
    //ll double c = (1.0*(a+b)/2)%998244353;
    ll c = pow((n*(n+1)/2),2);
    if(n==1){
        cout<<1<<endl;
    }
    else if((c)%n==0){
        cout<<(c)/n<<endl;
    }
    else{
        cout<<calculate(c,n)<<endl;
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