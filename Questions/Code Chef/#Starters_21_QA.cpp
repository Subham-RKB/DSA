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

int primeFactors(ll n)
{
    // Print the number of 2s that divide n
    set<ll> s;
    while (n % 2 == 0)
    {
        s.insert(2);
        n = n / 2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            s.insert(i);
            n = n / i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        s.insert(n);
    return s.size();
}

void solve()
{
    ll n, a;
    cin >> n;
    vector<ll> v;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
        sum += a;
    }
    sort(v.begin(), v.end());
    ll ok = ((n + 1) / 2) - 1;
    ll s = sum;
    if (sum%n==0 && ((sum/n)==v[ok]))
    {
         cout << 0 << endl;
    }
    else
    {
        sum = sum - v[ok];
        ll ans = v[ok];
        //cout<<ans<<" "<<sum <<endl;
        v[ok] =ceil(1.0*sum / (n - 1));
        ans= v[ok]-ans;
        ll x = (n * v[ok]) - (s+ans);
        cout << x+ans << endl;
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