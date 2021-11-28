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
    int c;
    // vector<int> v;
    map<int, int> m;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> c;
        if (m.find(c) == m.end())
        {
            m[c] = 1;
        }
        else
            m[c]++;
    }
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        v[i / 2]++;
        v[(i + n - 1) / 2]++;
    }
    int a = 0;
    for (auto &e : m)
    {
        if (e.second != v[a])
        {
            cout << -1 << endl;
            return;
        }
        a++;
    }
    for (auto &e : m)
    {
        cout << e.first << " ";
    }
    cout << endl;
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