#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a="0";
        string b="1";
        string c;
        for(int i=0;i<n;i++){
            c=a+b;
            b=c;
            a=b;
        }
        cout<<c<<endl;
    }
}