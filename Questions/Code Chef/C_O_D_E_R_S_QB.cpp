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
    vector<ll> v;
    cin >> n;
    ll a;
    ll z = 0;
    ll minn=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 0)
        {
            z++;
        }
        if(minn>a){
            minn=a;
        }
        v.push_back(a);
    }
    if (z != 0)
    {
        cout << n - z << endl;
    }
    else
    {
        //cout<<minn<<endl;
        ll count=0;
        for(int i=0;i<v.size();i++){
            if(minn==v[i]){
                count++;
            }
        }
        //cout<<count<<endl;
        ll k= n-count;
        ll ans= (count*minn)+(minn*(k))+(k);
        cout<<ans<<endl;
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