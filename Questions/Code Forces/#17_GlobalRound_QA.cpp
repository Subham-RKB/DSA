#include <bits/stdc++.h>
using namespace std;

#define rep(i,n)        for(auto i=0; i<(n); i++)
#define loop(i,a,b)     for(auto i=(a); i<(b); i++)
#define rloop(i,a,b)    for(auto i=a-1; i>=(b); i--) 
#define all(x)          x.begin(),x.end() 
#define len(x)          ((int)x.size()) 
#define sqr(x)          ((x)*(x))
#define mod             1000000007
#define pb              push_back
#define xx              first
#define yy              second
#define pcount          __builtin_popcount

typedef long long       ll; 
typedef string          st; 
typedef vector<int>     vi; 
typedef vector<string>      vs; 
typedef map<int,int>    mii; 
typedef map<string,int>     msi; 
typedef pair<int,int>   pii; 
typedef vector<pii>     vpii; 
int palindrome(vector<int>&arr, int n)
{
    int flag = 0;
    for (int i = 0; i <= n / 2 && n != 0; i++) {
        if (arr[i] != arr[n - i - 1]) {
            flag = 1;
            break;
        }
    }
    return flag;
}

void solve(){
    ll n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    if(palindrome(v,n)==0){
        cout<<"YES"<<endl;
    }
    else{
        vector<int> v1;
        vector<int> v2;
        int s=0;
        int e=n-1;
        while(s<=e){
            if(v[s]!=v[e]){
                break;
            }
            s++;
            e--;
        }
        for(int i=0;i<n;i++){
            if(v[s]!=v[i]){
                v1.push_back(v[i]);
            }
            if(v[e]!=v[i]){
                v2.push_back(v[i]);
            }
        }
        if(palindrome(v1,v1.size())==0 || palindrome(v2,v2.size())==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int _;
    cin >> _;
    while(_--){
        solve();
    }
    return 0;
}