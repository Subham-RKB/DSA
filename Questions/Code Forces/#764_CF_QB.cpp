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
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        // v.push_back(a);
        if (a > n)
        {
            while (a > n)
            {
                a /= 2;
            }
        }
        v.push_back(a);
        cout << a << " ";
    }
    cout<<endl;
    sort(v.begin(), v.end());
    vector<ll> vv(n + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        if (vv[v[i]] == 0)
        {
            vv[v[i]] = 1;
        }
        else
        {
            int k = v[i];
            while (v[i] >= 1 && vv[v[i]] == 0)
            {
                k = v[i];
                v[i] /= 2;
            }
            if (vv[k] == 0)
            {
                vv[k] = 1;
                cout << k <<" ";
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        
        if (vv[i] == 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    // ll a, b, c;
    // cin >> a >> b >> c;
    // int k = 0;
    // if (abs((c - b) + b) % a == 0)
    // {
    //     a = (b - c) + b;
    // }
    // else if (abs((b - a) + b) % c == 0)
    // {
    //     c = (a - b) + b;
    //     // cout<<"C"<<endl;
    // }
    // else
    // {
    //     if ((a + c) % 2 == 0)
    //     {
    //         if (((a + c) / 2) % b == 0)
    //         {
    //             b = (a + c) / 2;
    //             // cout<<"B"<<endl;
    //         }
    //     }
    // }
    // if(b-a == c-b){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }
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