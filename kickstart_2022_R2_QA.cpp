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
string answer = "";
int k1, k2;
bool helper(int i, int j, string s, vector<vector<int>> &v, int k, int r, int c)
{
    if (s.length() == k && i == 0 && j == 0)
    {
        answer = s;
        return true;
    }
    if (i < 0 || i >= r || j < 0 || j >= c || v[i][j] != 0)
        return false;
    v[i][j] = 1;
    bool res = helper(i + 1, j, s + "S", v, k, r, c) |
               helper(i - 1, j, s + "N", v, k, r, c) |
               helper(i, j + 1, s + "E", v, k, r, c) |
               helper(i, j - 1, s + "W", v, k, r, c);
    v[i][j] = 0;
    s.pop_back();
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _;
    cin >> _;
    int i = 1;
    while (_--)
    {
        int r, c;
        cin >> r >> c;
        char o;
        string ans = "";
        int k = 0;
        // vector<vector<char>> v1(r, vector<char>(c));
        vector<vector<int>> v((2 * r), vector<int>((2 * c), 0));
        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                cin >> o;
                // v1[i][j] = o;
                if (o == '*')
                {
                    k += 1;
                    for (int k = (i*2)-2; k <= i*2; k++)
                    {
                        for (int l = (j*2)-2; l <= j*2; l++)
                        {
                            v[k][l] = 0;
                        }
                    }
                }
                else
                {
                    for (int k = (i*2)-2; k <= i*2; k++)
                    {
                        for (int l = (j*2)-2; l <= j*2; l++)
                        {
                            v[k][l] = 1;
                        }
                    }
                }
            }
        }
        // for (int i = 0; i < 2 * r; i++)
        // {
        //     for (int j = 0; j < 2 * c; j++)
        //     {
        //         cout << v[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        bool ok = helper(0, 0, ans, v, k * 4, 2 * r, 2 * c);
        //cout << k1 << " " << k2 << endl;
        if (ok)
        {
            cout << "Case #" << i++ << ": " << answer << endl;
        }
        else{
            cout << "Case #" << i++ << ": IMPOSSIBLE"<< endl;
        }
        // bool ok1 = helper(0, 1, ans+"E", v, k*4, 2*r, 2*c);
        // if(ok1)
        // {
        //     cout << "Case #" << i++ << ": " << answer << endl;
        // }
    }
    return 0;
}