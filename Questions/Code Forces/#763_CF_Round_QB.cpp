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
    ll n, a, b;
    cin >> n;
    set<int> s;
    vector<vector<ll>> v;
    unordered_map<ll, ll> m;
    ll k = n;
    for (ll i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a - b == 0)
        {
            cout << a << " " << b << " " << a << endl;
            s.insert(a);
            m[a] = INT_MAX;
            k--;
        }
        else
        {
            for (int j = a; j <= b; j++)
            {
                m[j]++;
            }
            v.push_back({a, b});
        }
    }
    for (ll i = 0; i < k; i++)
    {
        ll ok = INT_MAX;
        ll h = 0;
        for (ll k = v[i][0]; k <= v[i][1]; k++)
        {
            m[k]--;
            if (m[k] < ok && s.find(k) == s.end())
            {
                ok = m[k];
                h = k;
            }
        }
        if (h != 0)
            cout << v[i][0] << " " << v[i][1] << " " << h << endl;
        s.insert(h);
        m[h] = 100000;
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
// 13 23 11 -