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
    unordered_map<ll, vector<ll>> m;
    priority_queue<ll> q;
    vector<ll>
        v;
    vector<ll> v1;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    if (v[n-2]>v[n-1])
    {
        cout<<-1<<endl;
    }
    else
    {
        cout << n - 2 << endl;
        for (int i = 0; i < n - 2; i++)
        {
            cout << i + 1 << " " << n - 2 << " " << n - 1 << endl;
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