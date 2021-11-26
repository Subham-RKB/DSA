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
    string s;
    cin>>s;
    double ans=0.0;
    for(int i=1;i<n;i++){
        if(s[i-1]!=s[i]){
            ans+=0.5;
        }
    //     if(s[i]=='W'){
    //         int a=i+1;
    //         while(a<n && s[a]==s[i]) a++;
    //         k=1;
    //     }
    //     else if(i>0 && s[i]!=s[i-1]){
    //         int a=i+1;
    //         ans++;
    //         while(a<n && s[a]==s[i])a++;
    //         k=1;
    //     }
    //     else{
    //         int a=i+1;
    //         while(a<n && s[a]==s[i]) a++;
    //         k=1;
    //     }
    // }
    // if(k) cout<<ans<<endl;
    // else cout<<0<<endl;
    }
    cout<<ceil(ans)<<endl;
    // int b=0,w=0;
    // if(s[0]=='B'){
    //     //b=0;
    //     char a=s[0];
    //     int k=0;
    //     while(s[0]!='W') k++;
    //     for(int i=k;i<s.length();i++){
    //         if(s[i]==a){
    //             b++;
    //             while(s[i]!='W') i++;
    //         }
    //     }
    // }
    // else{
    //     //w=0;
    //     char a=s[0];
    //     int k=0;
    //     while(s[0]!='B') k++;
    //     for(int i=k;i<s.length();i++){
    //         if(s[i]==a){
    //             b++;
    //             while(s[i]!='B') i++;
    //             cout<<i<<endl;
    //         }
    //         cout<<i<<endl;
    //     }

    // }
    // cout<<b<<" "<<w<<endl;
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