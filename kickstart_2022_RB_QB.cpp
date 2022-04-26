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
bool palindrome(ll num)
{
    ll rev = 0, val;
    val = num;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    if (val == rev)
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _;
    cin >> _;
    int i = 1;
    //cout<<sqrt(10000000000)<<endl;
    while (_--)
    {
        ll n;
        cin >> n;
        ll count = 0;
        for (ll j = 1; j <= sqrt(n); j++)
        {
            if (n % j == 0 && palindrome(j))
                count++;
            if (n%j==0 && ((n/j)!=j) && (n % (n / j) == 0) && palindrome(n / j))
                count++;
        }
        cout << "Case #" << i++ << ": "<< count << endl;
    }
    return 0;
}