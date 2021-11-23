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
    ll n, a, b;
    cin >> n >> a >> b;
    int c = n / 2;
    vector<int> answer;
    answer.push_back(a);
    int g=0;
    int k = 0;
    for (int i = n; i > a; i--)
    {
        if (i != b)
        {
            answer.push_back(i);
            k++;
            g++;
        }
        if (k >= (c - 1))
            break;
    }
    answer.push_back(b);
    k = 0;
    for (int i = 1; i < b; i++)
    {
        if (i != a)
        {
            answer.push_back(i);
            k++;
            g++;
        }
        if (k >= (c - 1))
            break;
    }
    if(g!=(n-2)){
        cout<<-1<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            cout<<answer[i]<<" ";
        }
        cout<<endl;
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