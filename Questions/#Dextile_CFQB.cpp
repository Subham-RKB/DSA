#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll c;
            cin >> c;
            v.push_back(c);
        }
        ll ans = 0;
        if (n == 1)
            cout << 0 << endl;
        else if (n == 2)
        {
            if ((v[0] % 2 == 0 && v[1] % 2 == 0) || (v[0] % 2 != 0 && v[0] % 2 != 0))
            {
                cout << -1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            ll c = 0;
            ll aa = 0;
            ll bb = 0;
            ll even = 0;
            ll odd = 0;
            for (ll i = 0; i < n; i++)
            {
                if (v[i] % 2 == 0)
                {
                    aa = aa + 1;
                    even = even + 1;
                    if (odd > 1)
                    {
                        //swap(v[i],v[c+1]);
                        ans = ans + (odd - 1);
                        even = even - 1;
                        odd--;
                        c = c + 2;
                    }
                }
                else
                {
                    bb = bb + 1;
                    odd = odd + 1;
                    if (even > 1)
                    {
                        //swap(v[i],v[c+1]);
                        ans = ans + (even - 1);
                        odd = odd - 1;
                        even--;
                        c = c + 2;
                    }
                }
                if (even == odd)
                {
                    c = i;
                }
            }
            if (even == odd || even - 1 == odd || odd - 1 == even)
            {
                cout << ans << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}