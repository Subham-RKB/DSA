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
ll maximumSubarraySum(vector<ll>& arr, ll k, ll x)
{
    ll n = arr.size();
    ll maxSum = LONG_MIN;
    ll currSum = 0;
    ll a = k;
    for (ll i = 0; i <= n - 1; i++)
    {
        ll y =arr[i];
        if (a != 0)
        {
            y+=x;
            a--;
        }
        currSum += y;
        if (currSum > maxSum)
        {
            maxSum = currSum;
            //cout<<maxSum<<" ";
        }
        if (currSum < 0)
        {
            currSum = 0;
            a = k;
        }
    }

    return maxSum;
}
void solve()
{
    ll n, x, a;
    cin >> n >> x;
    vector<ll> v;
    vector<ll> v1;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
        v1.push_back(a);
    }
    vector<ll> ans(n + 1, 0);
    for (ll i = 0; i <= n; i++)
    {
        ll ok =maximumSubarraySum(v,i,x);
        ans[i] = max(ans[i], ok);
        if (i != 0)
            ans[i] = max(ans[i], ans[i - 1]);
    }
    for (ll i = 0; i <= n; i++)
    {
        cout << ans[i] << " ";
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
//-7 -2 -1
// k = 0