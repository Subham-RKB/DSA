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
        if(n==1) cout<<-1<<" "<<-1<<endl;
        else{
            int a=0;
            for(int i=0;i<n-1;i++){
                if(s[i]!=s[i+1]){
                    cout<<i+1<<" "<<i+2<<endl;
                    a=1;
                    break;
                }
            }
            if(a==0) cout<<-1<<" "<<-1<<endl;
        }
    }
}