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
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> vv(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        vv[i] = v[i];
    }
    sort(vv.begin(), vv.end());
    if (v == vv)
    {
        cout << 0 << endl;
    }
    else
    {
        ll ans = 0;
        while (v != vv)
        {
            ll a = 0, b = 0;
            ll i, o = 0, p = n - 1;
            for (i = 0; i < n; i++)
            {
                if (v[i] == vv[o])
                {
                    a = i;
                }
            }
            for (i = 0; i < n; i++)
            {
                if (v[i] == vv[p])
                {
                    b = i;
                    break;
                }
            }
            partial_sort(v.begin(), v.begin() + a,v.end());
            sort(v.begin() + b, v.end());
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            ll maxx = *max_element(v.begin(), v.begin() + a);
            ll minn = *min_element(v.begin() + b, v.end());
            ans = ans + (vv[p] - minn) + (maxx - v[o]);
            o++;
            p--;
        }
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