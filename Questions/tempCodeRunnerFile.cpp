#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;
        int in=0;
        unordered_set<int> ma;
        unordered_set<int> mb;
        for(int i=0;i<q;i++){
            int a;
            char c;
            cin>>c>>a;
            if(ma.size()>m){
                in=1;
                //break;
            }
            if(c=='+'){
                if(ma.find(a)==ma.end() && mb.find(a)==mb.end()){
                    ma.insert(a);
                    mb.insert(a);
                }
                else{
                    in=1;
                    //break;
                }
            }
            else if(c=='-'){
                if(ma.find(a)==ma.end()){
                    in=1;
                    //break;
                }
                else{
                    ma.erase(a);
                }
            }
        }
        if(in){
            cout<<"Inconsistent"<<endl;
        }
        else{
            cout<<"Consistent"<<endl;
        }
    }
}