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
bool check(string s)
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = s.length() - 1;
 
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (s[l++] != s[h--])
        {
            //printf("%s is not a palindrome\n", str);
            return false;
        }
    }
    return true;
    //printf("%s is a palindrome\n", str);
}
void solve()
{
    string s;
    cin >> s;
    // string k=s;
    int p=0;
    int n = s.length() - 1;
    while (n)
    {
        char a = s[s.length() - 1];
        s.pop_back();
        //cout<<a<<" "<<s<<endl;
        s = a + s;
        if(check(s)) p++;
        cout<<s<<endl;
        n--;
    }
    cout<<p<<endl;
    // ll n;
    // cin>>n;
    // if(n==2){
    //     cout<<"ab"<<endl;
    // }
    // else{
    // string s="a";
    // for(int i=1;i<n-1;i++){
    //     s=s+"b";
    // }
    // s=s+"a";
    // cout<<s<<endl;}
    // ll a=1;
    // for(ll i=1;i<=n;i++)
    // {
    //     cout<<a<<" ";
    //     a=a+2;
    // }
    // cout<<endl;
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