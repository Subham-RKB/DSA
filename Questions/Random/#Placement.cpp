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
vector<int> ans;
void dfs(vector<int>& color,unordered_map<int,vector<int>> m,vector<int>& visited,int a,int& p,int& aa){
    visited[aa]=1;
    for(int i=0;i<m[aa].size();i++){
        if(!visited[m[aa][i]] && a==color[m[aa][i]]){
            p++;
            dfs(color,m,visited,color[m[aa][i]],p,m[aa][i]);
        }
        else{
            ans.push_back(p);
            cout<<p<<endl;
            //visited[aa]=0;
            return;

        }
    }
}
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<int> color(n);
    rep(i,n){
        cin>>color[i];
    }
    unordered_map<int,vector<int>> m;
    rep(i,n-1){
        ll x,y;
        cin>>x>>y;
        m[x].pb(y);
        m[y].pb(x);
    }
    vector<int> vis(n+1,0);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            int p=1;
            dfs(color,m,vis,color[i],p,i);
        }
    }
    cout<< *max_element(ans.begin(),ans.end());
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _=1;
    // cin >> _;
    while(_--){
        solve();
    }
    return 0;
}