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
    string s;
    cin >> s;
    vector<int> v(k,0);
    int a=0;
    for(int i=0;i<n-k+1;i++){
        if(s[i]=='1'){
            a++;
        }
    }
    int ans=0;
    if(a%2!=0) ans++;
    int c=0;
    for(int i=n-k+1;i<n;i++){
        if(s[c]=='1'){
            a--;
        }
        if(s[i]=='1'){
            a++;
        }
        if(a%2!=0){
            ans++;
        }
        c++;
    }
    cout<<ans<<endl;
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