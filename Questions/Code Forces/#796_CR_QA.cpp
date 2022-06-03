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
    int k = 0;
    int l1 = 0;
    int l = 0;
    ll ans = 0;
    ll x = n;
    if (n % 2 == 1)
    {
        if (n == 1)
            cout << 3 << endl;
        else
            cout << 1 << endl;
    }
    else
    {
        while (n > 0)
        {
            if (n % 2 == 1 && l == 0)
            {
                ans += pow(2, k);
                l1 = 1;
            }
            if (l1 == 1)
                break;
            n = n / 2;
            k++;
        }
        if ((x ^ ans) > 0)
            cout << ans << endl;
        else
            cout << ans + 1 << endl;
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