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
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(y1==y2){
        if(y1>y3){
            cout<<abs(x1-x2)<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else if(y1==y3){
        if(y1>y2){
            cout<<abs(x1-x3)<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else if(y2==y3){
        if(y2>y1){
            cout<<abs(x2-x3)<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
        cout<<0<<endl;
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