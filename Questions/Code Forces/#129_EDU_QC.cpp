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
bool isSorted(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}
// int helper(int a,int x,int n){
//     if(floor(log10(x))+1==n){
//         return 0;
//     }
//     if(a==1){
//         return -1;
//     }
//     int k =x;
//     while(k>0){
//         a=max(k%10,a);
//         k/=10;
//     }
//     return 1+(helper(a,x*a,n));
// }
void solve()
{
    // ll n,x;
    // cin>>n>>x;
    // ll a = 0;
    // //cout<<log2(pow(10,5))<<endl;
    // //cout<<floor(log10(1234))+1<<endl;
    // ll k =x;
    // while(k>0)
    // {
    //     a=max(k%10,a);
    //     k/=10;
    // }
    // //cout<<a<<endl;
    // if(a==1){
    //     if(floor(log10(x))+1!=n){
    //         cout<<-1<<endl;
    //     }
    //     //cout<<"OK"<<endl;
    // }
    // else{
    //     ll ans =1;
    //     //cout<<log2(pow(10,12))<<endl;
    //     int t = log2(pow(10,n-1))+1-(log2(x));
    //     while(t>0){
    //         t-=log2(a);
    //         x=k;
    //         if(a==1 && floor(log10(k))+1!=n){
    //             cout<<-1<<endl;
    //             break;
    //         }
    //         while(k>0)
    //         {
    //             a = max(a,k%10);
    //             k/=10;
    //         }
    //         ans++;
    //     }
    //     cout<<ans<<endl;
    // }
    ll n, a;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v1.push_back(a);
    }
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v2.push_back(a);
    }
    if (isSorted(v1, n) && isSorted(v2, n))
    {
        // cout<<"Ok"<<endl;
        cout << 0 << endl;
    }
    else
    {
        int t = 0;
        vector<vector<int>> swaps1;
        vector<int> v11 = v1;
        vector<int> v22 = v2;
        vector<vector<int>> swaps;
        int k = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < (n - i - 1); j++)
            {
                if (v2[j] > v2[j + 1])
                {
                    int temp = v2[j];
                    v2[j] = v2[j + 1];
                    v2[j + 1] = temp;
                    swaps.push_back({j, j + 1});
                    int temp1 = v1[j];
                    v1[j] = v1[j + 1];
                    v1[j + 1] = temp1;
                    // if (v1[j] != v1[j + 1])
                    // {
                    //     k = 1;
                    //     break;
                    // }
                }
            }
        }
        //printVector(v1);
        //printVector(v2);
        
        if (!isSorted(v1, n) && isSorted(v2, n))
        {
            // swap(v1, v2);
            //  int t = 0;
            //  vector<vector<int>> swaps;
            //  int k = 0;
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 0; j < (n - i - 1); j++)
                {
                    if (v1[j] > v1[j + 1])
                    {
                        // t++;
                        int temp = v1[j];
                        v1[j] = v1[j + 1];
                        v1[j + 1] = temp;
                        swaps.push_back({j, j + 1});
                        if (v2[j] != v2[j + 1])
                        {
                            k = 1;
                            break;
                        }
                    }
                }
                if (k == 1)
                    break;
            }
        }
        int l = 0;
        if (k == 0)
        {
            l = 1;
            //cout<<("Ok")<<endl;
            cout << swaps.size() << endl;
            for (int i = 0; i < swaps.size(); i++)
            {
                cout << swaps[i][0] << " " << swaps[i][1] << endl;
            }
        }
        if (l == 0)
        {
            int kk = 0;
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 0; j < (n - i - 1); j++)
                {
                    if (v11[j] > v11[j + 1])
                    {
                        int temp = v11[j];
                        v11[j] = v11[j + 1];
                        v11[j + 1] = temp;
                        swaps1.push_back({j, j + 1});
                        int temp1 = v22[j];
                        v22[j] = v22[j + 1];
                        v22[j + 1] = temp1;
                        // if (v1[j] != v1[j + 1])
                        // {
                        //     k = 1;
                        //     break;
                        // }
                    }
                }
            }
            //printVector(v11);
            //printVector(v22);
            if (isSorted(v11, n) && !isSorted(v22, n))
            {
                // swap(v1, v2);
                //  int t = 0;
                //  vector<vector<int>> swaps;
                //  int k = 0;
                for (int i = 0; i < n - 1; i++)
                {
                    for (int j = 0; j < (n - i - 1); j++)
                    {
                        if (v22[j] > v22[j + 1])
                        {
                            // t++;
                            int temp = v22[j];
                            v22[j] = v22[j + 1];
                            v22[j + 1] = temp;
                            swaps1.push_back({j, j + 1});
                            if (v11[j] != v11[j + 1])
                            {
                                kk = 1;
                                break;
                            }
                        }
                    }
                    if(kk==1) break;
                }
            }
            if (kk == 0)
            {
                l = 1;
                cout << swaps1.size() << endl;
                //cout<<"Ok"<<endl;
                for (int i = 0; i < swaps1.size(); i++)
                {
                    cout << swaps1[i][0] << " " << swaps1[i][1] << endl;
                }
            }
        }
        if (l == 0)
        {
            cout << -1 << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _=1;
    //cin >> _;
    while (_--)
    {
        solve();
    }
    return 0;
}