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
vector<vector<ll>> helper(ll n, ll m,vector<ll>& a)
{
    vector<vector<ll>> v;
    for(ll i =0;i<n;i++)
    {
        ll y = 1;
        while(a[i]%m==0)
        {
            a[i]/=m;
            y*=m;
        }
        if(!v.size()==0 && a[i]==v[v.size()-1][0])
        {
            v[v.size()-1][1]+=y;
        }
        else{
            v.push_back({a[i],y});
        }
    }
    return v;
}
void solve()
{
    ll n, m, k;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    vector<ll> b(k);
    for (ll i = 0; i < k; i++)
    {
        cin >> b[i];
    }
    auto aa = helper(n,m,a);
    auto bb = helper(k,m,b);
    cout<<(aa==bb?"Yes":"No")<<endl;
    
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