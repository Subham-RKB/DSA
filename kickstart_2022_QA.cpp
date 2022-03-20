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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _;
    cin >> _;
    int aa = 1;
    while (aa <= _)
    {
        string a, b;
        cin >> a >> b;
        int b_len = b.length();
        int a_len = a.length();
        int count = 0;
        int ans = 0;
        int k = 0;
        for (int i = 0; i < b_len; i++)
        {
            if (k < a_len && a[k] == b[i])
            {
                k++;
            }
            else
            {
                ans++;
            }
        }
        if (k == a_len)
        {
            cout << "Case #" << aa << ": " << ans << endl;
        }
        else
        {
            cout << "Case #" << aa << ": IMPOSSIBLE" << endl;
        }
        aa += 1;
    }
    return 0;
}