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
    int input[3][3];
    rep(i, 3)
    {
        rep(j, 3)
        {
            input[i][j] = 0;
        }
    }
    rep(i, 3)
    {
        rep(j, 3)
        {
            int x;
            cin >> x;
            input[i][j] += x;
            if (i + 1 < 3)
            {
                input[i + 1][j] += x;
            }
            if (i - 1 >= 0)
            {
                input[i - 1][j] += x;
            }
            if (j + 1 < 3)
            {
                input[i][j + 1] += x;
            }
            if (j - 1 >= 0)
            {
                input[i][j - 1] += x;
            }
        }
    }
    rep(i, 3)
    {
        rep(j, 3)
        {
            if (input[i][j] % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _ = 1;
    // cin >> _;
    while (_--)
    {
        solve();
    }
    return 0;
}