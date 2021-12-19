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

void solve(){
    string s;
    cin>>s;
    if(s[0]==s[s.length()-1]) cout<<"NO"<<endl;
    else{
        int f=0,l=0,e=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==s[0]) f++;
            else if(s[i]==s[s.length()-1]) l++;
            else e++;
        }
        //cout<<f<<" "<<e<<" "<<l<<endl;
        int k1=0,k2=0;
        if(f+e==l){
            stack<char> st;
            int a=0;
            for(int i=0;i<s.length();i++){
                if(s[i]!=s[s.length()-1]){
                    st.push(s[i]);
                }
                else{
                    if(st.empty()) {k1=0;break;}
                    else st.pop();
                }
                a++;
            }
            if(st.empty() && a==s.length()) k1=1;
            else k1=0;
        }
        int b=0;
        if(l+e==f){
            stack<char> st;
            for(int i=0;i<s.length();i++){
                if(s[i]==s[0]){
                    st.push(s[i]);
                }
                else{
                    if(st.empty()) {k2=0;break;}
                    else st.pop();
                }
                b++;
            }

            if(st.empty() && b==s.length()) k2=1;
            else k2=0;
        }
        if(k1+k2!=0){
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