#include<bits/stdc++.h>
using namespace std;
void helper(int n,int &ans){
    if(n<=3) {ans=ans+n;return ;}
    vector<int> v;
    int max=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            //v.push_back(i);
            max=i;
            //cout<<i<<endl;
        }
    }
    if(max>0){
        ans=ans+1;
        helper(n/max,ans);
    }
    else{
        ans=ans+1;
        helper(n-1,ans);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        helper(n,ans);
        cout<<ans<<endl;
    }
}