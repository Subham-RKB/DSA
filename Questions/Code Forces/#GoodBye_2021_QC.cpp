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
int solve()
{
    int n, a;
    cin >> n;
    //cout << n << endl;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int ans = 100;
    for (int i = 0; i < n - 1; i++)
    {
        int k = v[i];
        int h = 0;
        int c = 0;
        for (int j = i + 1; i < n; j++)
        {
            if (k < v[j])
            {
                h = i;
            }
        }
        c = h - i;
        int y = (v[h] - k) / c;
        int l = k + y;
        for (int k = i + 1; k < h; k++)
        {
            if (l != v[k])
            {
                c++;
            }
            l = l + y;
        }
        c = c + (n - h);
        if (ans > c)
        {
            ans = c;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _;
    cin >> _;
    while (_--)
    {
        int n=solve();
        cout<<n<<endl;
    }
    return 0;
}