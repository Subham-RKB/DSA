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
ll helper(string s, int a, int j)
{
    stack<char> S;
    int k = 0;
    int l = 0;
    for (ll i = a; i <= j; i++)
    {
        if (s[i] == '(')
        {
            S.push(s[i]);
            k = 1;
            continue;
        }
        if (S.empty() && k == 0)
            return -1;
        else if (S.empty() && k != 0)
            return i;
        S.pop();
    }
    if (S.empty())
        return s.length();
    return -1;
}
bool helperr(string s, int f, int e)
{
    while (f < e)
    {
        if (s[f] != s[e])
            return false;
        f++;
        e--;
    }
    return true;
}
void solve()
{
    ll n;
    string s;
    cin >> n >> s;
    int i = 0;
    int j = 1;
    int count = 0;
    while (j < s.length())
    {
        int kk = helper(s, i, j);
        bool yy = helperr(s, i, j);
        // cout<<kk<<" "<<yy<<endl;
        // cout<<i<<" "<<j<<endl;
        if (kk != -1 || yy != false)
        {
            count++;
            i = j + 1;
            j++;
        }
        j++;
    }
    cout << count << " " << n - (i) << endl;
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