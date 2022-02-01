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
long long int KnapSack(vector<ll> &val, vector<ll> &wt, ll n, ll W)
{
    ll dp[W + 1];
    memset(dp, 0, sizeof(dp));
    for (ll i = 0; i < n; i++)
        for (ll j = W; j >= wt[i]; j--)
            dp[j] = max(dp[j], val[i] + dp[j - wt[i]]);
    return dp[W];
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    ll b, c;
    vector<ll> bb;
    vector<ll> cc;
    vector<ll> w;
    for (ll i = 0; i < n; i++)
    {
        cin >> b;
        bb.push_back(b);
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> c;
        if (bb[i] == 1)
        {
            ans += c;
        }
        else
        {
            cc.push_back(c);
            ll o = 0;
            while (bb[i] > 1) //logic to find the number of moves
            {
                o++;
                if (bb[i] % 2 == 0)
                    bb[i] /= 2;
                else
                    bb[i] -= 1;
            }
            w.push_back(o);
        }
    }
    vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, -1));
    ans += KnapSack(cc, w, w.size(), k);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int val[] = {6, 5, 2}, wt[] = {4, 3,1}, W = 4, n = 3;
    // cout << KnapSack(val, wt, n, W) << endl;
    int _;
    cin >> _;
    while (_--)
    {
        solve();
    }
    return 0;
}