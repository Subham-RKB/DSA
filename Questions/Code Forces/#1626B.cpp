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
   string x;
   cin>>x;
   int k=-1;
   for(int i=0;i<x.length()-1;i++)
   {
       int a= x[i]-'0';
       int b= x[i+1]-'0';
       if(a+b>=10)
       {
           k=i;
       }
   }
   if(k==-1)
   {
       int a = x[0]-'0';
       int b= x[1]-'0';
       cout<<a+b;
       for(int i=2;i<x.length();i++)
       {
           cout<<x[i];
       } 
       cout<<endl;
   }
   else{
       for(int i=0;i<k;i++)
       {
           cout<<x[i];
       }
       int a = x[k]-'0';
       int b = x[k+1]-'0';
       cout<<a+b;
       for(int i=k+2;i<x.length();i++)
       {
           cout<<x[i];
       } 
       cout<<endl;
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