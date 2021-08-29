#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if((a+b)%2!=0){
            cout<<-1<<endl;
        }
        else if(a==b){
            if(a==0) cout<<0<<endl;
            else cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}