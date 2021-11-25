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
    ll n;
    cin >> n;
    vector<int> ans;
    int e=0;
    while (n > 0)
    {
        ans.push_back(n % 10);
        if((n%10)%2==0){
            e=1;
        }
        n = n / 10;
        //cout << n << endl;
    }
    if(e==0){
        cout<<-1<<endl;
    }
    else{
    if(ans[0]%2==0){
        cout<<0<<endl;
    }
    else if(ans[0]%2!=0 && ans[ans.size()-1]%2==0){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
    }
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