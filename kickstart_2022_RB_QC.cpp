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
int groupsOfOnes(vector<ll> &S, ll N)
{
    // Stores number of groups of 1s
    int count = 0;

    // Initialization of the stack
    stack<ll> st;

    // Traverse the string S
    for (ll i = 0; i < N; i++)
    {

        // If S[i] is '1'
        if (S[i] == 1)
            st.push(1);
        // Otherwise
        else
        {
            // If st is empty
            if (!st.empty())
            {
                count++;
                while (!st.empty())
                {
                    st.pop();
                }
            }
        }
    }
    // If st is not empty
    if (!st.empty())
        count++;

    // Return answer
    return count;
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
        ll n, d, e;
        cin >> n >> d;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        // ll count = 0;
        // e = v[0];
        // for (ll i = 1; i < n; i++)
        // {
        //     if (v[i] != e)
        //     {
        //         // cout<<e<<" "<<v[i]<<endl;
        //         e = v[i];
        //         count += 1;
        //         // cout<<v[i]<<endl;
        //     }
        // }
        // if (v[0] == 0)
        //     cout << "Case #" << i++ << ": " << (count / 2) << endl;
        // else
        cout << "Case #" << i++ << ": " << groupsOfOnes(v,n) << endl;
        // else if (count == 0)
        // {
        //     if (v[0] == 0)
        //     {
        //         cout << "Case #" << i++ << ": " << 0 << endl;
        //     }
        //     else
        //     {
        //         cout << "Case #" << i++ << ": " << 1 << endl;
        //     }
    }
    return 0;
}