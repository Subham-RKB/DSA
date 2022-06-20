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
    ll i =0;
    ll j =n-1;
    ll k =0;
    while(k<n)
    {
        if(s[i]=='0' && s[i+1]=='1'){
            c = '1';
            o=i;
            i=i+2;
            while(i && )
        }
    }






































    // while(i<=j-1)
    // {
    //     //cout<<"i "<<i<<endl;
    //     if(s[i]=='0' && s[i+1]=='1')
    //     {
    //         ans+=1;
    //         i+=2;
    //         while(i<=j && s[i]=='0')
    //         {
    //             i++;
    //             ans++;
    //         }
    //         if(i>=j){
    //             break;
    //         } 
    //         i--;
    //     }
    //     else if(s[i]=='1' && s[i+1]=='0')
    //     {
    //         ans+=1;
    //         i+=2;
    //         while(i<=j && s[i]=='1')
    //         {
    //             cout<<"Ok"<<endl;
    //             i++;
    //             ans++;
    //         }
    //         if(i>=j) break;
    //         i--;
    //     }
    //     i++;
    // }
    // //cout<<"Ans1 "<<ans<<endl;
    // i=j;
    // while(i>1)
    // {
    //     if(s[i]=='0' && s[i-1]=='1')
    //     {
    //         //ans+=1;
    //         i-=2;
    //         while(i>=0 && s[i]=='1')
    //         {
    //             i--;
    //             ans++;
    //         }
    //         if(i<1){
    //             break;
    //         } 
    //         i++;
    //     }
    //     else if(s[i]=='1' && s[i-1]=='0')
    //     {
    //         //ans+=1;
    //         i-=2;
    //         while(i>=0 && s[i]=='0')
    //         {
    //             i--;
    //             ans++;
    //         }
    //         if(i<1) break;
    //         i++;
    //     }
    //     i--;
    // }
    // cout<<ans+n<<endl;
    //while(i<=j)
    //{
    //     if(s[i]=='1' && )
    //     // if(s[i]=='0')
    //     // {
    //     //     zero++;
    //     // }
    //     // else{
    //     //     ans+=zero;
    //     //     zero=0;
    //     // }
    //     // i++;
    // }
    // zero=0;
    // while(j>=0)
    // {
    //     if(s[j]=='1')
    //     {
    //         zero++;
    //     }
    //     else{
    //         ans+=zero;
    //         zero=0;
    //     }
    //     j--;
    // }
    // cout<<ans+n<<endl;
    
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