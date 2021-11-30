#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (auto i = 0; i < (n); i++)
#define loop(i, a, b) for (auto i = (a); i < (b); i++)
#define rloop(i, a, b) for (auto i = a - 1; i >= (b); i--)
#define all(x) x.begin(), x.end()
#define len(x) ((int)x.size())
#define sqr(x) ((x) * (x))
#define mod 1000000007
#define pb push_back
#define xx first
#define yy second
#define pcount __builtin_popcount

typedef long long ll;
typedef string st;
typedef vector<int> vi;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef map<string, int> msi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<int> vv;
    while(n>0){
        vv.push_back(n%10);
        //cout<<n%10<<endl;
        n=n/10;
    }
    sort(vv.begin(),vv.end());
    while(k>0){
        if(vv[0]!=9) vv[0]=vv[0]+1;
        else{
            k=0;
        }
        sort(vv.begin(),vv.end());
        k--;
    }
    //for(int e:v) cout<<e<<endl;
    // vector<int> v;
    // for(int i=vv.size()-1;i>=0;i--){
    //     v.push_back(vv[i]);
    // }
    // int a=v.size()-1;
    // // while(v[a]<v[0] && k>0){
    // //     if(v[a]<v[0]){
    // //         if((v[a]!=9)){
    // //             v[a]=v[a]+1;
    // //             //cout<<v[a]<<endl;
    // //             k=k-1;
    // //             //cout<<v[a]<<endl;
    // //         }
    // //     }
    // //     a--;
    // //     if(a<0){
    // //         a=v.size()-1;
    // //     }
    // // }
    // a=v.size()-1;
    // if(k>0){
    // while(k!=0 && v[a]!=9){
    //     if(v[a]!=9) v[a]=v[a]+1;
    //     k--;
    //     a--;
    //     if(a<0){
    //         a=v.size()-1;
    //     }
    // }
    // }
    ll ans=1;
    for(int i=0;i<vv.size();i++){
        //cout<<v[i]<<endl;
        ans=ans*vv[i];
    }
    cout<<ans<<endl;
}
//2 3 3 2 
//9 1 1 - 8  
// 5 1 2 - 3  


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _;
    cin >> _;
    while (_--)
    {
        solve();
    }
    return 0;
}