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
vector<int> v;
void ok()
{
    for (int i = 10; i < 1000; i += 10)
    {
        for (int j = 0; j < 9; j++)
        {
            if ((i + j) % 7 == 0)
            {
                //cout << i << endl;
                v.push_back(i + j);
                break;
            }
        }
    }
}
void solve()
{
    //cout<<371%7<<endl;
    ll n;
    cin >> n;
    ll ans;
    ll l = log10(n);
    if (n % 7 == 0)
    {
        cout << n << endl;
    }
    else{
        cout<<v[n/10-1]<<endl;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ok();
    int _;
    cin >> _;
    while (_--)
    {
        solve();
    }
    return 0;
}