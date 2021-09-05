#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    // cout<<(0^1^2^3^4^5^6)<<endl;
    // ll arr[100001];
    // arr[0]=0;
    // for(int i=1;i<100001;i++){
    //     arr[i]=(arr[i-1]^i);
    // }
    ll t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int c=(a-1)%4;
        int d=0;
        if(c==0){
            d=a-1;
        }
        else if(c==1){
            d=1;
        }
        else if(c==2){
            d=a;
        }
        else{
            d=0;
        }
        if(d==b){
            cout<<a<<endl;
        }
        else if(d==0 && a==b){
            cout<<a+2<<endl;
        }
        else if(b==a){
            cout<<a+1<<endl;
        }
        else if((d^a)==b){
            cout<<a+2<<endl;
        }
        else{
            cout<<a+1<<endl;
        }

    }
    
}