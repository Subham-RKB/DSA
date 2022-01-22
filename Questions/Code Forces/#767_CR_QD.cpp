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
    ll no;
    string s;
    cin>>no;
    vector<string> words;
    map<string, int> hmap;
    for(ll i=0;i<no;i++){
        cin>>s;
        words.push_back(s);
    }
    ll i, n = words.size(), count = 0, flag = 0;
    string temp,c;
    int k=0;
    for (i = 0; i < n; i++)
    {
        string d="";
        temp = words[i];
        c=words[i];
        if(c.length()==2){
            reverse(c.begin(),c.end());
            c+=c[c.length()-1];
        }
        else if(c.length()==3){
            if(c[1]==c[2]){
                d=c[0];
            }
            hmap[c.substr(0,2)]++;
            if(d.length()>=1)hmap[d]++;
            c=words[i];
            reverse(c.begin(),c.end());
            c=c.substr(0,2);
            swap(c[0],c[1]);
            //cout<<hmap[c]<<endl;
            if(hmap[c]!=0){
                k=1;
                break;
            }
            swap(c[0],c[1]);
        }
        //reverse(c.begin(),c.end());
        reverse(temp.begin(), temp.end());
        if (temp == words[i])
        {
            k=1;
            break;
        }
        if (hmap[temp] == 0){
            //cout<<temp<<endl;
            hmap[words[i]]++;
        }
        else
        {
            k=1;
            break;
        }
        if(hmap[c]==0)
            hmap[words[i]]++;
        else{
            k=1;
            break;
        }
 
    }
    if(k==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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