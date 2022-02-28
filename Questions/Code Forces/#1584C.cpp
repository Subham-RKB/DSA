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
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        //m[b[i]]++;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++){
        if(a[i]==b[i]) continue;
        if(a[i]+1==b[i]) continue;
        cout<<"NO"<<endl;
        return;

    }
    // for(int i=0;i<n;i++){
    //     if(m[a[i]]>0){
    //         m[a[i]]--;
    //     }
    //     else if(m[a[i]+1]>0)
    //     {
    //         m[a[i]+1]--;
    //     }
    //     else{
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    // }
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