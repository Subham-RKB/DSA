#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        long long int aa=(b/2)+1;
        if(aa>a){
            cout<<(b%aa)<<endl;
        }
        else{
            cout<<b-a<<endl;
        }

    }
}