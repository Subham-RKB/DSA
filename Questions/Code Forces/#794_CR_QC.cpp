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
bool check(vector<ll> &v)
{
    ll k = 0;
    for (ll i = 0; i < v.size(); i++)
    {
        ll x = i - 1;
        ll y = i + 1;
        if (x < 0)
            x = v.size() - 1;
        if (y > v.size() - 1)
            y = 0;
        if (k % 2 == 0)
        {
            if (!(v[x] > v[i] && v[y] > v[i]))
            {
                return false;
            }
        }
        else
        {
            if (!(v[x] < v[i] && v[y] < v[i]))
            {
                return false;
            }
        }
        k++;
    }
    return true;
}
bool check1(vector<ll> &v)
{
    ll k = 0;
    for (ll i = 0; i < v.size(); i++)
    {
        ll x = i - 1;
        ll y = i + 1;
        if (x < 0)
            x = v.size() - 1;
        if (y > v.size() - 1)
            y = 0;
        if (k % 2 != 0)
        {
            if (!(v[x] > v[i] && v[y] > v[i]))
            {
                return false;
            }
        }
        else
        {
            if (!(v[x] < v[i] && v[y] < v[i]))
            {
                return false;
            }
        }
        k++;
    }
    return true;
}
void solve()
{
    ll n, a;
    cin >> n;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    ll s = 0;
    ll e = n - 1;
    sort(v.begin(), v.end());
    //vector<ll> v1;
    ll k =0;
    // while(k<n)
    // {
    //     v1.push_back(v[k]);
    //     ll o = k+1;
    //     while(v[o]<v[k])
    // }
    vector<ll> v1;

    while (s <= e)
    {
        v1.push_back(v[s]);
        if (s + 1 == e)
        {
            v1.push_back(v[e]);
            break;
        }
        v1.push_back(v[e]);
        s++;
        e--;
    }
    if (check(v1) || check1(v1))
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
        return;
    }
    // else
    // {
    //     cout << "NO" << endl;
    // }
    reverse(v.begin(),v.end());
    v1.clear();
    s=0;
    e=n-1;
    while (s <= e)
    {
        v1.push_back(v[s]);
        if (s + 1 == e)
        {
            v1.push_back(v[e]);
            break;
        }
        v1.push_back(v[e]);
        s++;
        e--;
    }
    if(check1(v1) || check1(v1)){
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
        return;
    }
    cout<<"NO"<<endl;

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