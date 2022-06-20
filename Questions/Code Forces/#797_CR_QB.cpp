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
    ll n, a, b;
    cin >> n;
    vector<ll> v1;
    vector<ll> v2;
    int l = 1;
    ll k = -1;
    int no=0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        v1.push_back(a);
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b;
        v2.push_back(b);
        if(v1[i]<b){
            no=1;
        }
        if (b != 0 && l == 1)
        {
            k = v1[i] - b;
            l = 0;
        }
    }
    if(no) {
        cout<<"NO"<<endl;
        return;
    }
    //cout<<"K"<<k<<endl;
    if (k == -1)
        cout << "YES" << endl;
    else
    {
        for (ll i = 0; i < n; i++)
        {
            if (v1[i] - v2[i] < k)
            {
                if (v2[i]>0)
                {
                    //cout<<v1[i]<<endl;
                    cout << "NO" << endl;
                    return;
                }
            }
            else{
                if(v1[i]-v2[i]==k){
                    continue;
                }
                else{
                    cout<<"NO"<<endl;
                    return;
                }

            }
            // if((v1[i]-v2[i])==k && v2[i]!=0){
            //     cout<<v1[i]<<endl;
            //     cout<<"NO"<<endl;
            //     return;
            // }
        }
        cout << "YES" << endl;
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