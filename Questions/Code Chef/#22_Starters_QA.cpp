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
vector<int> all;
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
void ok()
{
    ll i = 3;
    ll j = 1;
    while (j != 1000)
    {
        if (countSetBits(i) % 2 == 0)
        {
            all.push_back(i);
            j++;
        }
        i++;
    }
}
ll helper(string c,ll n){
    vector<ll> v(2*n);
    if(c[2*n-1]=='0'){
        v[2*n-1]=1;
    }
    else{
        v[2*n-1]=0;
    }
    ll ans=0;
    for(ll i=(2*n-2);i>=0;i--){
        if(c[i]=='0'){
            v[i]=v[i+1]+1;
        }
        else{
            v[i]=v[i+1];
            ans+=v[i+1];
        }
        //cout<<v[i]<<" ";
    }
    //ll ans = accumulate(v.begin(),v.end(),0);
    return ans;
}
void solve()
{
    ll n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    string c="";
    string d="";
    ll i=0,j=0;
    //int k=0;
    while(i<a.length() && j<b.length()){
        if(a[i]!=b[j]){
            if(a[i]=='0'){
                while(a[i]!='1' && i<a.length()){
                    c+=a[i];
                    i++;
                }
                c+=d;
                d="";
            }
            else if(b[j]=='0'){
                while(b[j]!='1' && j<b.length()){
                    c+=b[j];
                    j++;
                }
                //k=1;
                c+=d;
                d="";
                //cout<<c<<" "<<j<<endl;
            }
        }
        else{
            c+=a[i];
            d+=b[j];
            i++;
            j++;
        }
    }
    //int k= helper(c+d);
    //reverse(d.begin(),d.end());
    while(i<a.length()){
        c+=a[i];
        i++;
    }
    while(j<b.length()){
        c+=b[j];
        j++;
    }
    ll k= helper(c+d,n);
    reverse(d.begin(),d.end());
    ll kk =helper(c+d,n);
    //cout<<"OK"<<endl;
    cout<<min(k,kk)<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ok();
    int _;
    cin >> _;
    while (_--)
    {
        solve();
    }
    return 0;
}