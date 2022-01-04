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
    int n,k;
    cin>>n>>k;
    int t=n;
    if(n%2!=0){
        t=t+1;
    }
    if(t<(k*2)){
        cout<<-1<<endl;
    }
    else{
        vector<vector<char>> v;
        for(int i=0;i<n;i++){
            vector<char> vv;
            for(int j=0;j<n;j++){
                vv.push_back('.');
            }
            v.push_back(vv);
        }
        int a=0,b=0;
        while(a<n && b<n && k--){
            v[a][b]='R';
            a=a+2;
            b=b+2;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<v[i][j];
            }
            cout<<endl;
        }
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