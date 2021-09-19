#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int o=0,z=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                o++;
            }
            else{
                z++;
            }
        }
        if(a==b) cout<<"YES"<<endl;
        if(o==0 || z==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}