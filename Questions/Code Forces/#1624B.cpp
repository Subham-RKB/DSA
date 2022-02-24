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
    ll a,b,c,aa,bb,cc;
    cin>>a>>b>>c;
    aa = b-(c-b);
    if(aa>=a && aa%a==0 && aa!=0){
        cout<<"YES"<<endl;
        return;
    }
    bb = a+(c-a)/2;
    if(bb>=b && bb%b==0 && bb!=0 && (c-a)%2==0){
        cout<<"YES"<<endl;
        return;
    }
    cc = a + (b-a)*2;
    if(cc>=c && cc%c==0 && cc!=0){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;

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