#include <bits/stdc++.h>
#define ll int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        int one = 0;
        int two = 0;
        ll h=0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one = one + 1;
            else
                {two = two + 1;h=i;}
        }
        int l = 0;
        if (two == 1 || two == 2)
        {
            cout << "NO" << endl;
            l = 1;
        }
        if (l == 0)
        {
            set<ll> m;
            cout << "YES" << endl;
            for(int i=0;i<n;i++){
                for(int j=0;j<)
            }
            // for (ll i = 0; i < n; i++)
            // {
            //     char a = s[i];
            //     int k = 1;
            //     for (ll j = 0; j < n; j++)
            //     {
            //         if (i == j)
            //         {
            //             cout << 'X';
            //         }
            //         else if (a == '2')
            //         {
            //             if (s[j] == '2' && k)
            //             {
            //                 if (m.find(j) != m.end())
            //                 {
            //                     cout << '-';
            //                 }
            //                 else
            //                 {
            //                     cout << '+';
            //                     m.insert(j);
            //                     m.insert(i);
            //                     k = 0;
            //                 }
            //             }
            //             else if (s[j] == '2' && !k)
            //             {
            //                 cout << '-';
            //             }
            //             else if (s[j] == '1')
            //             {
            //                 cout << '-';
            //             }
            //         }
            //         else if (a == '1')
            //         {
            //             if (s[j] == '2')
            //             {
            //                 cout << '+';
            //             }
            //             else
            //             {
            //                 cout << '=';
            //             }
            //         }
            //     }
            //     cout << endl;
            // }
        }
    }
}