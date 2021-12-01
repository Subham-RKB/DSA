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
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll a = 0;
        cin >> a;
        v.push_back(a);
    }
    ll s = k/n;
    ll e = k;
    while (s <= e)
    {
        ll mid = s + (e - s) / 2;
        ll ans = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            if (v[i] + mid > v[i + 1])
            {
                ans = ans + (v[i + 1] - v[i]);
            }
            else
            {
                ans = ans + mid;
            }
        }
        ans = ans + mid;
        if (ans >= k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    cout << s << endl;
    // ll n;
    // cin >> n;
    // vector<ll> v;
    // set<int> s;
    // for (int i = 0; i < n; i++)
    // {
    //     ll a;
    //     cin >> a;
    //     v.push_back(a);
    //     s.insert(a);
    // }
    // sort(v.begin(), v.end());
    // int c=0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (v[i] != v[j])
    //         {
    //             if (s.find(v[j] % v[i]) == s.end())
    //             {
    //                 cout << v[j] << " " << v[i] << endl;
    //                 c++;
    //             }
    //         }
    //         if(c==n/2){
    //         break;
    //     }
    //     }
    //     if(c==n/2){
    //         break;
    //     }
    // }
    // long long int x1,p1,x2,p2;
    // cin>>x1>>p1>>x2>>p2;
    // if((x1*pow(10,p1))<(x2*pow(10,p2))){
    //     cout<<'<'<<endl;
    // }
    // else if((x1*pow(10,p1))>(x2*pow(10,p2))){
    //     cout<<'>'<<endl;
    // }
    // else{
    //     cout<<'='<<endl;
    // }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int _;
    cin >> _;
    while (_--)
    {
        solve();
    }
    return 0;
}