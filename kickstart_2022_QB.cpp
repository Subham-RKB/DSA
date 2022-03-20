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
    ll _;
    cin >> _;
    int aa = 1;
    while (aa <= _)
    {
        string n;
        cin >> n;
        string o = n;
        ll sum = 0;
        for(ll i =0;i<n.length();i++)
        {
            sum+=(n[i]-'0');
        }
        if (sum % 9 == 0)
        {
            string t = o;
            string ans = t.substr(0, 1) + '0' + t.substr(1, t.length());
            cout << "Case #" << aa << ": " << ans << endl;
        }
        else
        {
            ll p = sum % 9;
            ll y = 9 - p;
            string N = o;
            ll len = N.length();
            string h = to_string(y);
            ll position = len + 1;
            for (ll i = len - 1; i >= 0; i--)
            {
                if ((N[i] - '0') > y)
                {
                    position = i;
                }
            }
            string ans;
            if(position>=len)
            {
                ans=N+h;
            }
            else if(position<=0)
            {
                ans=h+N;
            }
            else ans = N.substr(0, position) + to_string(y) + N.substr(position, N.length());
            cout << "Case #" << aa << ": " << ans << endl;
        }
        aa++;
    }
    return 0;
}
