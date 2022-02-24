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
    ll n;
    cin >> n;
    string s;
    vector<string> v;
    rep(i, n - 2)
    {
        cin >> s;
        v.push_back(s);
    }
    string str = v[0];
    int k = 0;
    for (int i = 1; i < n - 2; i++)
    {
        if (str[str.length()-1] != v[i][0])
        {
            k = 1;
            str += v[i];
        }
        else
        {
            str += v[i][1];
        }
    }
    if (k == 0)
    {
        str += 'a';
    }
    cout << str << endl;
}
// int k = 0;
// for (int i = 0; i <= n - 3; i++)
// {
//     v.insert(i+1,v[i][1]+v[i+1][0]);
//     if (v[i][1] == v[i][0])
//     {
//         continue;
//     }
//     if (v[i][1] != v[i + 1][0])
//     {
//         k = 1;
//         ans += v[i][1];
//         ans += v[i + 1][0];
//     }
//     else
//     {
//         ans += v[i][0];
//         ans += v[i + 1][0];
//     }
// }

// string w = ans;
// char c = w[0];
// ans = "";
// k = 1;
// for (int i = 1; i < w.length(); i++)
// {
//     // cout<<c<<endl;
//     if (c == w[i])
//     {
//         k++;
//     }
//     else
//     {
//         if (k <= 2)
//         {
//             for (int j = 0; j < k; j++)
//             {
//                 ans += c;
//             }
//         }
//         else
//         {
//             for (int j = 0; j < (k + 1) / 2; j++)
//             {
//                 ans += c;
//             }
//         }
//         c = w[i];
//         k = 1;
//     }
// }
// if (k <= 2)
// {
//     for (int j = 0; j < k; j++)
//     {
//         ans += c;
//     }
// }
// else
// {
//     for (int j = 0; j < (k + 1) / 2; j++)
//     {
//         ans += c;
//     }
// }
// cout << ans << endl;

// abbaaaba
// aba
// abba
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