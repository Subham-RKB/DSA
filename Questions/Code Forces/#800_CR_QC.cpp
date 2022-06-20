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
    ll k = 0;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    ll i =0;
    while(i<n)
    {
        k+=v[i];
        //cout<<k<<i<<endl;
        if(k==0)
        {
            i++;
            while(i<n && v[i]==0){
                i++;
            }
            //cout<<i<<endl;
            if(i!=n){
                flag= 1;
                break;
            }
        }
        else if(k<0)
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0 && k==0)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
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