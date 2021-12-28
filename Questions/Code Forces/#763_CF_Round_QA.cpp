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
    ll n, m, r1, r2, c1, c2;
    cin >> n >> m >> r1 >> r2 >> c1 >> c2;
    int dr = 1;
    int dc = 1;
    int ans = 0;
    while (1)
    {
        if (r1==c1 || r2==c2)
        {
            break;
        }
        if (r1 + dr <= n)
        {
            r1 = r1 + dr;
        }
        else
        {
            dr = -1;
            r1=r1+dr;
        }
        if (r2 + dc <= m)
        {
            r2 = r2 + dc;
        }
        else
        {
            dc = -1;
            r2=r2+dc;
        }
        ans++;
    }
    cout << ans << endl;
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