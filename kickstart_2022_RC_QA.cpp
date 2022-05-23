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
    int n;
    cin>>n;
    string s;
    cin >> s;
    int digit = 0;
    int upper = 0;
    int special = 0;
    int lower = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]>= 'A' && s[i]<= 'Z')
        {
            upper = 1;
        }
        else if (s[i] >= 'a' && s[i]<= 'z')
        {
            lower = 1;
        }
        else if (s[i] == '#' || s[i] == '@' || s[i] == '*' || s[i] == '&')
        {
            special = 1;
        }
        else if (s[i] - '0' >= 0 && s[i] - '0' <= 9)
        {
            digit = 1;
        }
    }
    if (upper == 0)
    {
        s += "A";
    }
    if (lower == 0)
    {
        s += "a";
    }
    if (digit == 0)
    {
        s += "1";
    }
    if (special == 0)
    {
        s += "@";
    }
    if (n < 7)
    {
        for (int i = s.length(); i <7; i++)
        {
            s += "A";
        }
    }
    cout << "Case #" << t << ": " << s << endl;
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