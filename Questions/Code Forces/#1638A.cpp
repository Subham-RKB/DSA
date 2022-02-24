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
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    int i=0;
    vector<int> ans;
    while(v[i]==i+1 && i<n){
        ans.push_back(v[i]);
        cout<<v[i]<<" "; 
        i++;
    }
    vector<int> ans1;
    int j=i;
    while(v[j]!=i+1 && j<n){
        //cout<<v[j]<<" ";
        ans1.push_back(v[j]);
        j++;
    }
    if(j<n) ans1.push_back(v[j]);
    for(int k=ans1.size()-1;k>=0;k--)
    {
        cout<<ans1[k]<<" ";
    }
    j++;
    while(j<n){
        cout<<v[j]<<" ";
        j++;
    }
    cout<<endl;
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