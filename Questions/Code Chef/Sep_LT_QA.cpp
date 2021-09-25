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
        if ((n / 2) % 2 == 1)
            cout << "NO" << endl;
        else
        {
            cout<<"YES"<<endl;
            vector<int> v1;
            vector<int> v2;
            for (int i = 1; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    v2.push_back(i);
                }
                else
                {
                    v1.push_back(i);
                }
            }
            for (int i = (n/2)/2; i < n / 2; i++)
            {
                int a = v2[i];
                v2[i] = v1[i];
                v1[i] = a;
            }
            for (int i = 0; i < (n / 2); i++)
            {
                cout << v1[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < (n / 2); i++)
            {
                cout << v2[i] << " ";
            }
            cout<<endl;
        }
    }
}