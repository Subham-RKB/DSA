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
    ll i = 0, j = 0, n, m, k;
    cin >> n >> m >> k;
    string a, b;
    cin >> a >> b;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    //cout << a << " " << b << endl;
    string c = "";
    int u = 1;
    ll count1 = k;
    ll count2 = k;
    while (i < n && j < m)
    {
        cout << c << " "<<count1<<" "<<count2<<endl;
        if (a[i] < b[j])
        {
            while (a[i] < b[j] && i < n && count1 > 0 && (u==0 || c.empty()))
            {
                count1--;
                c += a[i];
                i++;
                u=1;
            }
            if (count1 == 0 && j < m && i < n)
            {
                c += b[j];
                j++;
                count2--;
            }
            if (i >= n || j >= m)
            {
                break;
                // cout<<"ok"<<endl;
            }
            count1 = k;
        }
        else
        {
            while (a[i] > b[j] && j < m && count2 > 0)
            {
                count2--;
                c += b[j];
                j++;
            }
            if (count2 == 0 && i < n && j < n)
            {
                c += a[i];
                i++;
                count1--;
            }
            if (i >= n || j >= m)
            {
                break;
            }
            count2 = k;
        }
    }
    cout << c << endl;
    // while(i<n && j<m)
    // {
    //     //cout<<i<<" "<<j<<endl;
    //     if(a[i]-'a'<b[i]-'a')
    //     {
    //         ll count = k;
    //         while(i<n && count-- && a[i]-'a'<b[j]-'a')
    //         {
    //             c+=a[i];
    //             i++;
    //         }
    //         if(count==0){
    //             c+=b[j];
    //             j++;
    //         }
    //         if(i>=n || j>=m)
    //         {
    //             break;
    //         }
    //         //i--;
    //     }
    //     else{
    //         ll count = k;
    //         while(j<m && count-- && b[j]<a[i])
    //         {
    //             c+=b[j];
    //             j++;
    //         }

    //         if(count==0){
    //             c+=b[i];
    //             i++;
    //         }
    // if(i>=n || j>=m)
    // {
    //     break;
    //         }
    //         //j--;
    //     }
    // }
    // cout<<c<<endl;
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