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
    int n,m;
    cin>>n>>m;
    int mat[n][m];
    int copMAT[n][m];
    string s;

    for(int i=0;i<n;i++)
    {
        cin>>s;

        for(int j=0;j<s.length();j++)
        {
            mat[i][j]=s[j]-'0';
        }
    }
    if(n==1 && m==1){
        cout<<0<<endl;
        return;
    } 
    for(int i=0;i<n;i++)
    {
        if(mat[i][0]==1){
            if(i-1>=0 && mat[i-1][0]==1)
            {
                cout<<-1<<endl;
                return;
            }
        }
    }
    cout<<(n*m)<<endl;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            cout<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<endl;
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