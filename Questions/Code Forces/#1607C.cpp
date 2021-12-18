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
    ll n;
    cin>>n;
    ll a;
    ll minn=INT_MAX;
    priority_queue<ll,vector<ll>,greater<ll>>pq;
    for(int i=0;i<n;i++){
        cin>>a;
        if(minn>a){
            minn=a;
        }
        pq.push(a);
    }
    //sort(arr.begin(),arr.end(),greater<int>());
    ll ans=minn;
    ll curr=0;
    while(pq.size()>1){
        ll p=pq.top();pq.pop();
        ll d=p;
        p-=curr;
        ans=max(ans,p);
        curr+=p;
    }
    ans=max(ans,pq.top()-curr);
    cout<<ans<<endl;
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