#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(int ii=1;ii<=t;ii++){
        int a=1;
        ll n;
        cin>>n;
        int l=0;
        int r=0;
        string s;
        cin>>s;
        ll ans=0;
        int k=0;
        while(s[k]=='F'){
            k++;
        }
        if(s[k]=='O') l=1;
        if(s[k]=='X') r=1;
        for(ll i=k+1;i<n;i++){
            if(s[i]=='O'){
                if(r){
                    ans++;
                    r=0;
                    l=1;
                }
            }
            else if(s[i]=='X'){
                if(l){
                    ans++;
                    r=1;
                    l=0;
                }
            }
        }
        cout<<"Case #"<<ii<<": "<<ans<<endl;
    }
}