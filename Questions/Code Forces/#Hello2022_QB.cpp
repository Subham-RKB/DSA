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
    ll n, a, b, c;
    cin >> n;
    vector<vector<ll>> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        v.push_back({a, b, c});
    }
    ll x = v[0][0];
    ll y = v[0][1];
    ll min_coin = v[0][2];
    ll max_coin = v[0][2];
    cout << min_coin << endl;
    vector<vector<ll>> vv;
    vv.push_back({x, y});
    int k = 1;
    for (ll i = 1; i < n; i++)
    {
        ll ans = 0;
        if (x == v[i][0] && y == v[i][1])
        {
            ans = v[i][2];
        }
        else
        {
            if (x >= v[i][0] && y > v[i][1])
            {
                if (x == v[i][0])
                {
                    ans = max_coin;
                }
                else
                    ans = v[i][2] + max_coin;
                x = v[i][0];
                min_coin = v[i][2];
                k = 0;
            }
            else if (x >= v[i][0] && y < v[i][1])
            {
                x=v[i][0];
                y = v[i][1];
                if (k)
                    ans = max_coin;
                else
                    ans = min_coin + v[i][2];
                max_coin = v[i][2];
                min_coin = v[i][2];
                k = 1;
            }
            else if (x < v[i][0] && y >= v[i][1])
            {
                if (y == v[i][1])
                {
                    if (k)
                        ans = max_coin;
                    else
                        ans = min_coin + v[i][2];

                    
                }
                else{
                    if(k) ans=max_coin;
                    else ans=v[i][2]+min_coin+max_coin;
                }
            }
            else if (x < v[i][0] && y <= v[i][0])
            {
                y = v[i][1];
                if (k)
                {
                    ans = max_coin;
                }
                else
                    ans = min_coin + v[i][2];
                max_coin = v[i][2];
                k = 0;
            }
            else
            {
                ans = v[i][2];
            }
        }
        cout << x << " " << y << endl;
        cout << ans << endl;
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