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
    ll n,k,e;
    cin>>n>>k;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>e;
        arr.push_back(e);
    }
    int ans;
    for(int i=1;i<=k;i++){
        ans=0;
        int p=0;
        while(arr[p]==i) p++;
        for(int j=p;j<n-1;j++){
            int aa=arr[j];
            while(arr[j+1]==i || aa==arr[j+1]) j++;
            ans++;
            //cout<<ans<<endl;
        }
        int y = (ans-1)>(k-1)?(ans-1):(k-2);
        cout<<y<<" ";
    }
    cout<<endl;
}
        // ans=0.0;
        // int o=0;
        // while(arr[o]==i) o++;
        // for(int j=o;j<n-1;j++){
        //     int l=j;
        //     while(arr[j]==i) l++;
        //     if(arr[j]!=arr[l]){
        //             ans=ans+1;
        //             j=l;
        //             //cout<<ans<<endl;
        //     }
        //     }
        // }
        // cout<<ceil(ans)<<" ";
    
    //cout<<endl;


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