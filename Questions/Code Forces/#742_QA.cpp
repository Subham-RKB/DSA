#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='U'){
                s[i]='D';
            }
            else if(s[i]=='D'){
                s[i]='U';
            }
        }
        cout<<s<<endl;
    }
}