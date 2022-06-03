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
    ll n, a;
    cin >> n;
    vector<ll> v;
    vector<ll> odd;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
        int k = 0;
        while (a && a % 2 == 0)
        {
            a = a / 2;
            k++;
        }
        // cout<<k<<endl;
        odd.push_back(k);
    }
    //ll min = *min_element(odd.begin(), odd.end());
    sort(odd.begin(), odd.end());
    ll i = 0;
    if (odd[i] == 0)
    {
        while (i < n && odd[i] == 0)
        {
            i++;
        }
        if (i == n)
            cout << 0 << endl;
        else
            cout << (n-i) << endl;
    }
    else{
        cout << odd[i] + (n - 1) << endl;
    }

    // int ans = n -1 + min;
    // for (int i = 0; i < n; i++)
    // {
    //     if (min == 0 && odd[i] == 0)
    //     {
    //         ans--;
    //     }
    // }
    // cout << ans << endl;
    // ans = max(0, ans);
    // cout<<ans<<endl;
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