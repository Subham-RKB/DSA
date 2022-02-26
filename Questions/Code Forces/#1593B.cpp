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
ll ok;
void helper(string s, int n, int i, vector<int> &v)
{
    // cout<<n<<endl;
    if (i > s.length() - 1)
    {
        if (n % 25 == 0 && n > ok)
        {
            ok = n;
        }
        return;
    }
    if (v[i] != -1)
    {
        n = v[i];
        return;
    }
    v[i] = n;
    helper(s, ((n * 10) + (s[i] - '0')), i + 1, v);
    helper(s, n, i + 1, v);
    v[i] = -1;
}
void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int a = (s[i] - '0') * 10 + (s[j] - '0');
            //cout<<a<<endl;
            if (a % 25 == 0)
            {
                //cout<<i<<" "<<j<<" ";
                ans = min(ans, j - i - 1 + n - 1 - j);
            }
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