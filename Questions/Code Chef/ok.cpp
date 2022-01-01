#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n;

ll extrema(vector<ll> v)
{
    ll ans = 0;
    for (ll i = 1; i < v.size() - 1; i++)
    {
        if (v[i] > v[i - 1] && v[i] > v[i + 1])
        {
            ans++;
        }
        else if (v[i] < v[i - 1] && v[i] < v[i + 1])
        {
            ans++;
        }
    }
    return ans;
}

vector<vector<ll>> perm;

void recur(vector<ll> v, ll ind)
{
    if (ind == n)
    {
        perm.push_back(v);
        return;
    }
    for (ll i = 0; i < 3; i++)
    {
        v[ind] = i;
        recur(v, ind + 1);
    }
    return;
}
int
main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        perm = {};
        cin >> n;
        vector<ll> arr(n);
        recur(arr, 0);
        ll ans = 0;
        for (ll i = 0; i < perm.size(); i++)
        {
            ans += extrema(perm[i]);
        }
        cout << ans << endl;
        // for(ll i=0; i<perm.size(); i++){
        //     for(ll j=0; j<perm[i].size(); j++){
        //         cout<<perm[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
    }
}