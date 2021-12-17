#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v;
    v.push_back({1,7,14});
    v.push_back({1,8,16});
    sort(v.begin(),v.end());
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<v[i][j]<<endl;
        }
    }  
}