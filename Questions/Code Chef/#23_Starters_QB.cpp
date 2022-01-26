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
    ll n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    ll zero = 0;
    ll ans = INT_MIN;
    int k=0;
    int ans1=0;
    int j=0;
    while(s[j]=='0'){
        j++;
        zero++;
    }
    k= (zero%x);
    ans1+=(zero/x);
    ll l=n-1;
    zero=0;
    while(s[l]=='0'){
        l--;
        zero+=1;
    }
    ans1+=(zero/x);
    int k1=(zero%x);
    //cout<<ans1<<" "<<k1<<endl;
    for(int i=j;i<l;i++){
        //cout<<i<<endl;
        k=zero%x;
        if(s[i]=='1'){
            zero=1;
            while(s[++i]=='0'){
                zero+=1;
            }
            i--;
            int v= (zero+k)/x;
            if(v>ans){
                ans=v;
            }
            zero--;
        }
        //cout<<i<<endl;
    }
    //cout<<zero<<endl;
    ans1+=((zero+k1)/x);
    if(ans==INT_MIN){
        cout<<ans1<<endl;
    }
    else{
        cout<<ans+ans1<<endl;
    }
    //cout<<ans1<<endl;
    //cout<<ans+ans1<<endl;
    // vector<ll> v;
    // for (ll i = 0; i < n; i++)
    // {
    //     if (s[i] == '0')
    //     {
    //         v.push_back(zero++);
    //     }
    //     else
    //     {
    //         v.push_back(0);
    //         zero = 1;
    //     }
    // }
    // vector<ll> v1(n);
    // zero = 1;
    // for (ll i = n - 1; i >= 0; i--)
    // {
    //     if (s[i] == '0')
    //     {
    //         v1[i] = zero++;
    //     }
    //     else
    //     {
    //         v1[i] = 0;
    //         zero = 1;
    //     }
    // }
    // for (ll i = 0; i < n; i++)
    // {
    //     if (v[i] == 0)
    //     {
    //         if (i == 0)
    //         {
    //             if (ans < ((1 + v1[1]) / x))
    //             {
    //                 ans = (1 + v1[1]) / x;
    //             }
    //         }
    //         else if (i == n - 1)
    //         {
    //             if (ans < (1 + v[n - 2]) / x)
    //             {
    //                 ans = (1 + v[n - 2]) / x;
    //             }
    //         }
    //         else
    //         {
    //             if ((1 + v[i - 1] + v1[i + 1]) / x > ans)
    //             {
    //                 ans = (1 + v[i - 1] + v1[i + 1]) / x;
    //             }
    //         }
    //     }
    // }
    // cout << ans << endl;
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