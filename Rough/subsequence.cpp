#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int ii=0;ii<t;ii++){
        int a;
        cin>>a;
        string c;
        string d;
        cin>>c;
        d=c;
        sort(c.begin(),c.end());
        if(c==d){
            cout<<0<<endl;
        }
        else{
            int count=0;
            for(int i=0;i<a;i++){
                if(c[i]!=d[i]){
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
}