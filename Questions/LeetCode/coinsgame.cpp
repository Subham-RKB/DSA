#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int c;
        cin>>c;
        vector<vector<int>> v;
    for(int a=0;a<2;a++){
        for(int i=0;i<c;i++){
            int aa;
            cin>>aa;
            v[a].push_back(aa);
            }
        }
        int max=0;
        int ans=0;
        for(int i=0;i<c;i++){
            ans=ans+v[0][i];
            for(int j=i;j<c;j++){
                ans=ans+v[1][j];
            }
        }
    }
}