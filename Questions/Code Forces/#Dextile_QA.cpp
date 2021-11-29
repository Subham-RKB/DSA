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
int abc(string a)
{
    if (a.size() <= 2)
    {
        return 0;
    }
    int ans = 0;
    for (ll i = 0; i < a.size() - 2; i++)
    {
        if (a[i] == 'a' && a[i + 1] == 'b' && a[i + 2] == 'c')
        {
            ans++;
            i = i + 2;
        }
    }
    return ans;
}
bool check(vector<ll> v, int i)
{
    for (int ia = 0; ia < v.size(); ia++)
    {
        if (v[ia] % 2 == 0 && ia != i)
        {
            return true;
        }
    }
    return false;
}
int ok(vector<ll> &v, int i)
{
    for (int j = 0; j < v.size(); j++)
    {
        if (v[j] % 2 == 0 && j != i)
        {
            // v[i] *= 2;
            while (v[j] % 2 == 0)
            {
                v[i] = v[i] * 2;
                v[j] = v[j] / 2;
            }
            // cout<<v[i]<<endl;
        }
    }
    ll ans = 0;
    for (int ii = 0; ii < v.size(); ii++)
    {
        ans += v[ii];
    }
    return ans;
}
void solve()
{
    // ll n,q;
    // cin>>n>>q;
    // string s;
    // cin>>s;
    // //cout<<abc("abcabbabc");
    // for(ll i=0;i<q;i++){
    //     ll a;
    //     char c;
    //     cin>>a>>c;
    //     s[a-1]=c;
    //     cout<<abc(s)<<endl;
    // }
    int n;
    vector<ll> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    ll ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ll aa = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j] % 2 == 0 && j != i)
            {
                // v[i] *= 2;
                while (v[j] % 2 == 0)
                {
                    v[i] = v[i] * 2;
                    v[j] = v[j] / 2;
                }
                // cout<<v[i]<<endl;
            }
        }
        for (int ii = 0; ii < v.size(); ii++)
        {
            aa += v[ii];
        }
        if (aa > ans)
        {
            ans = aa;
        }
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