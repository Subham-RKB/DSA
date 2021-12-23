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
    string s1, s2;
    cin >> s1 >> s2;
    map<char, int> vowel;
    vowel['a'] = 1, vowel['e'] = 1, vowel['i'] = 1, vowel['o'] = 1, vowel['u'] = 1;
    int ans = n * 2;
    for (char a1 = 'a'; a1 <= 'z'; a1++)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            char ch1 = s1[i];
            char ch2 = s2[i];
            if (ch1 == '?')
                ch1 = a1;
            if (ch2 == '?')
                ch2 = a1;
            if (ch1 == ch2)
                continue;
            if ((vowel.find(ch1) == vowel.end() && vowel.find(ch2) == vowel.end()) || (vowel.find(ch1) != vowel.end() && vowel.find(ch2) != vowel.end()))
            {
                cnt += 2;
            }
            else
                cnt++;
        }
        ans = min(ans, cnt);
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