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
    ll n, m, a;
    cin >> n >> m;
    vector<vector<ll>> v(n,vector<ll> (m));
    for (ll i = 0; i < n; i++)
    {
        //vector<ll> vv;
        for (ll j = 0; j < m; j++)
        {
            cin >> a;
            if(j==0) v[i][j]=a;
            else v[i][j] = v[i][j-1]+a;
        }
        //v.push_back(vv);
    }
    for( ll i =1;i<n;i++)
    {
        for(ll j =0;j<m;j++)
        {
            v[i][j] = v[i][j]+v[i-1][j];
        }
    }
    //cout<<v[n-1][m-1]<<endl;
    if(v[n-1][m-1]==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

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