#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if((a+1)%3==0) a=a+1;
        else if((a+2)%3==0) a=a+2;
        if((b-1)%3==0) b=b-1;
        else if((b-2)%3==0) b=b-2;
        cout<<((b-a)/3)+1<<endl;
        // ll c=0;
        // if(a%3==0 && b%3!=0){
        //     c++;
        //     c=c+((b-(a+1))/3);
        //     cout<<c<<endl;
        // }
        // else if(a%3!=0 && b%3==0){
        //     c++;
        //     c=c+(((b-1)-a)/3);
        //     cout<<c<<endl;
        // }
        // else if(a%3==0 && b%3==0){
        //     c=2;
        //     c=c+(((b-1)-(a+1))/3);
        //     cout<<c;
        // }
        // else{
        //     cout<<(b-a)/3<<endl;
        // }
    }
}