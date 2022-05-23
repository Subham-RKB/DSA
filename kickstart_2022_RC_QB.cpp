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

void solve(int t)
{
    int n, x, y;
    cin >> n >> x >> y;
    int tot = n * (n + 1) / 2;
    if (tot % (x + y) != 0)
    {
        cout << "Case #" << t << ": IMPOSSIBLE" << endl;
    }
    else
    {
        int k = (tot / (x + y)) * x;
        // cout<<k<<endl;
        cout << "Case #" << t << ": POSSIBLE" << endl;
        if (k <= n)
        {
            // cout<<"ok"<<endl;
            cout << 1 << endl;
            cout << k << endl;
        }
        else
        {
            vector<int> v;
            int k1 = n;
            while (k > k1)
            {
                k -= k1;
                v.push_back(k1);
                // cout<<k1<<endl;
                k1--;
            }
            v.push_back(k);

            cout << v.size() << endl;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout<<endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _;
    cin >> _;
    int t = 1;
    while (_--)
    {
        solve(t);
        t++;
    }
    return 0;
}