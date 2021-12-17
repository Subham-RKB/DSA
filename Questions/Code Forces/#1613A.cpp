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
    ll x1,p1,x2,p2;
    cin>>x1>>p1>>x2>>p2;
    string x11=to_string(x1);
    string x12=to_string(x2);
    ll cx1=x11.size();
    ll cx2=x12.size();
    //cout<<cx1+p1<<" "<<cx2+p2<<endl;
    if((cx1+p1)>(cx2+p2)){
        cout<<">"<<endl;
    }
    else if((cx1+p1)<(cx2+p2)){
        cout<<"<"<<endl;
    }
    else{
        ll i=0;
       for(i=0;i<min(cx2,cx1);i++){
           if(x11[i]>x12[i]){
               cout<<">"<<endl;return;
           }
           else if(x11[i]<x12[i]){
               cout<<"<"<<endl;return;
           }
       }
       if(cx1>cx2){
           while(i<cx1){
               ll d=x11[i++]-'0';
               if(d>0){
                   cout<<">"<<endl;return;
               }
           }
           cout<<"="<<endl;
       }
       else{
           while(i<=cx2){
               ll d= x12[i++]-'0';
               if(d>0){
                   cout<<"<"<<endl;;return;
               }
           }
           cout<<"="<<endl;
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