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
    string a, b;
    cin >> a >> b;
    string c = b;
    int n1 = a.length();
    int n2 = b.length();
    int ans=0;
    for(int k =1;k<=min(n1,n2);k++)
    {
        for(int i=0;i+k<=n1;i++)
        {
            for(int j=0;j+k<=n2;j++)
            {
                if(a.substr(i,k)==b.substr(j,k))
                {
                    ans=max(ans,k);
                }
            }
        }
    }
    // int ans = n1 + n2;
    // vector<int> v;
    // if(n1>n2){
    //     swap(n1,n2);
    //     swap(a,b);
    // }
    // int answer = INT_MAX;
    // if (a == b)
    // {
    //     cout << 0 << endl;
    //     return;
    // }
    // for (int i = 0; i < a.length(); i++)
    // {
    //     ans = n1 + n2;
    //     for (int j = 0; j < b.length(); j++)
    //     {
    //         int k=i;
    //         if (a[i] == b[j])
    //         {
                
    //             while (a[k] == b[j] && k < n1 && j < n2)
    //             {
    //                 k++;
    //                 j++;
    //                 ans -= 2;
    //             }
    //             break;
    //         }
    //         i=k;
    //     }
    //     answer = min(answer, ans);
    // }
    // string a, b;
    // cin >> a >> b;
    // string c = b;
    // int n1 = a.length();
    // int n2 = b.length();
    // int ans = n1 + n2;
    // int answer = INT_MAX;
    // if (a == b)
    // {
    //     cout << 0 << endl;
    //     return;
    // }
    // if()
    // for (int i = 0; i < a.length(); i++)
    // {
    //     ans = n1 + n2;
    //     for (int j = 0; j < b.length(); j++)
    //     {
    //         if (a[i] == b[j])
    //         {
    //             while (a[i] == b[j] && i < n1 && j < n2)
    //             {
    //                 i++;
    //                 j++;
    //                 ans -= 2;
    //             }
    //             break;
    //         }
    //     }
    //     //i--;
    //     answer = min(answer, ans);
    // }
    cout << n1+n2-(ans*2) << endl;
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