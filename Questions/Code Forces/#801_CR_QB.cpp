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
    ll n, a;
    cin >> n;
    vector<ll> v;
    ll mx_m = INT_MAX;
    ll mx_j = INT_MAX;
    ll k = 0;
    ll x = -1;
    ll y = -1;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        if (i % 2 == 0)
        {
            if(mx_m>a){
                mx_m=a;
                x=i;
            }
        }
        else
        {
            if(mx_j>a){
                mx_j=a;
                y=i;
            }
        }
    }
    if (n % 2 == 1)
    {
        cout << "Mike" << endl;
    }
    else
    {
        if (mx_m > mx_j)
        {
            cout << "Mike" << endl;
        }
        else if (mx_m < mx_j)
        {
            cout << "Joe" << endl;
        }
        else
        {
            if (x < y)
            {
                cout << "Joe" << endl;
            }
            else
            {
                cout << "Mike" << endl;
            }
        }
    }
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