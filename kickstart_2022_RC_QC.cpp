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

bool palindrome(string word)
{
    int s = 0;
    int e = word.length() - 1;
    while (s < e)
    {
        if (word[s] != word[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

void helper(string word, int k, vector<int> &v, int n)
{
    if (word.length() == 0)
    {
        k = k + 1;
        v.push_back(k);
        cout << k << endl;
        return;
    }
    // if(palindrome(word))
    // {
    //     k=k+1;
    // }
    // if(palindrome(word)) k=k+1;
    if (word.length() > 1 && palindrome(word) && word.length() != n)
    {
        k = k + 1;
    }
    for (int i = 0; i < word.length(); i++)
    {

        string words = word.substr(0, i) + word.substr(i + 1, word.length());
        cout << words << endl;

        if (words.length() > 0 && palindrome(words))
        {
            // helper(words, k+1, v);
            k = k + 1;
        }
        helper(words, k, v, n);
        //k = 0;
    }
    return;
}
void solve(int t)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k = 0;
    vector<int> v;
    helper(s, k, v, n);
    cout<<k<<endl;
    int tot = accumulate(v.begin(), v.end(), 0);
    cout << tot << endl;
    int ans = (tot % 1000000007) / (v.size() % 1000000007);
    cout << "Case #" << t << ": " << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _;
    cin >> _;
    int t = 1;
    while (_--)
    {
        solve(t);
        t = t + 1;
    }
    return 0;
}