#include<bits/stdc++.h>
using namespace std;
void helper(int n,int &ans){
    if(n==0) return;
    vector<int> v;
    int max=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            max=i;
        }
    }
    if(v.size()>0){
        n=n/v[v.size()-1];
        ans=ans+1;
        helper(n,ans);
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