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
    ll m, x;
    cin >> m >> x;
    //m = m - 1;
    if (m == 2)
    {
        for (int i = 0; i < x; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }
    else
    {
        if (m % 2 != 0)
        {
            for (ll i = 1; i <= x; i++)
            {
                if (i < m)
                {
                    cout << i << " ";
                }
                else
                {
                    cout << m-1 << " ";
                }
            }
            cout << endl;
        }
        else
        {
            for (ll i = 1; i <= x; i++)
            {
                if (i < m)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << 2 << " ";
                }
            }
            cout << endl;
        }
    }
    // cout<<(2&4&7)<<endl;
    // if(n==1){
    //     if(a%2==0){
    //         cout<<"Even"<<endl;
    //     }
    //     else{
    //         cout<<"Odd"<<endl;
    //     }
    // }
    // else{
    //     cout<<"Impossible"<<endl;
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