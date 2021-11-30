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
    ll n, p, q;
    cin >> n >> p >> q;
    string s;
    cin >> s;
    ll x1 = 0;
    ll y1 = 0;
    bool x11 = false;
    bool y11 = false;
    if (s[0] == '1')
    {
        x1++;
        x11 = true;
    }
    else
    {
        y1++;
        y11 = true;
    }
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            if (x11 == true)
            {
                x1++;
                //cout << x1 << endl;
            }
            if (y11 == true)
            {
                y1++;
                //cout << y1 << endl;
            }
        }
        else
        {
            if (x11 == true)
            {
                y1++;
                x11 = false;
                y11 = true;
            }
            else if (y11 == true)
            {
                x1++;
                y11 = false;
                x11 = true;
            }
        }
    }
    cout << x1 << y1 << endl;
    int x=1;
    int y=1;
    int xxx=0;
    int yyy=0;
    if(x1%abs(x)==0){
        if((x1/x)%2!=0){
            x=1;
        }
        if(x==0){
            if(x1%2==0){
                x=1;
            }
        }
    }
    if(y1%abs(y)==0){
        if((y1/y)%2!=0){
            y=1;
        }
        if(y==0){
            if(y1%2==0){
                x=1;
            }
        }
    }
    if(y1%abs(x)==0){
        if((y1/x)%2!=0){
            xxx=1;
        }
        if(x==0){
            if(y1%2==0){
                xxx=1;
            }
        }
    }
    if(x1%abs(y)==0){
        if((x1/y)%2!=0){
            yyy=1;
        }
        if(y==0){
            if(y1%2==0){
                yyy=1;
            }
        }
    }
    if((x==y==1) || (xxx==yyy==1)){
        cout<<"YES"<<endl;  
    }
    else{
        cout<<"NO"<<endl;
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