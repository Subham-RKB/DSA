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
    long long int a, s, ans = 0;
    long long int c = 0;
    cin >> a >> s;
    if (a > s)
    {
        cout << -1 << endl;
    }
    else
    {
        while (s > 0)
        {
            long long int r = a % 10;
            long long int p = s % 10;
            if (r > p)
            {
                p = s % 100;
                if ((p - r) > 10 || (p - r) < 0)
                {
                    ans = -1;
                    break;
                }
                else
                {
                    ans = ((p - r) * (pow(10, c))) + ans;
                    s = s / 100;
                    a = a / 10;
                    c++;
                }
            }
            else if (r <= p)
            {
                ans = ((p - r) * pow(10, c)) + ans;
                a = a / 10;
                s = s / 10;
                c++;
            }
        }
        if (a > 0)
            ans = -1;
        cout << ans << "\n";
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