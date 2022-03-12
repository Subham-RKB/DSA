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
int valid(string s)
{
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1]) return 0;
    }
    return 1;
}
int tot(string s)
{
    int total= 0;
    for(int i=0;i<s.length();i++)
    {
        total+=s[i]-'0';
    }
    return total;
}
void solve(){
    int n;
    cin>>n;
    int k =n;
    string s="";
    int count=0;
    char c='2';
    while(count<n)
    {
        s+=c; 
        count+=c-'0';
        //cout<<count<<endl;
        if(c=='1')
        {
            c='2';
        }
        else{
            c='1';
        }
    }
    int ans=0;
    if(valid(s)==1 && tot(s)==n) {
        cout<<s<<endl;
        return;
    }
    c='1';
    count=0;
    s="";
    while(count<n)
    {
        s+=c; 
        count+=c-'0';
        if(c=='1')
        {
            c='2';
        }
        else{
            c='1';
        }
    }
    cout<<s<<endl;
    
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