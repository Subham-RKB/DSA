#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> odd;
        vector<int> even;
        int n;
        cin>>n;
        int e=0,o=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a%2==0){
                even.push_back(a);
                e++;
            }
            else{
                odd.push_back(a);
                o++;
            }
        }
        if(e==0 || o==0 || (o==1 && odd[0]==1)){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<o;i++){
                cout<<odd[i]<<" ";
            }
            for(int i=0;i<e;i++){
                cout<<even[i]<<" ";
            }
            cout<<endl;
        }
    }
}