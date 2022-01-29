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
    ll ans = 0;
    if (n % 2 != 0)
    {
        if ((n + 1) % 4 == 0)
            ans = (n * (n - 1));
        else
        {
            ll k = ceil(log2(n));
            while (n > 1)
            {
                ll s = pow(2, k) - 1;
                ans += s * (n - (s - n) + 1);
                n = s - n - 1;
                k--;
            }
        }
        cout << ans << endl;
    }
    else
    {
        cout << n * (n + 1) << endl;
        // if (n == 2)
        //     cout << 6 << endl;
        // else if (n % 4 == 0)
        //     cout << n * (n + 1) << endl;
        // else
        // {
        //     ll k = ceil(log2(n));
        //     cout<<k<<endl;
        //     while (n >= 0)
        //     {
        //         ll s = pow(2, k) - 1;
        //         ans += s * (n - (s - n) + 1);
        //         cout<<ans<<endl;
        //         n = s - n - 1;
        //         k--;
        //         cout<<n<<endl;
        //     }
        //     cout << ans << endl;
        // }
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