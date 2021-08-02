#include<bits/stdc++.h>
using namespace std;
void helper(int n,int &ans){
    if(n==0) return;
    vector<int> v;
    int max=0;
    for(int i=2;i<n/2+1;i++){
        if(n%i==0){
            v.push_back(i);
            max=i;
        }
        // else{
        //     if(n%i==0){
        //         if(v[i-1]*i==n || i*i==n){
        //             max=i;
        //         }
        //         else{
        //             v.push_back(i);
        //         }
        //     }

        // }
    }
    if(v.size()>1){
        for(int i=0;i<v.size()-1;i++){
            if(v[i]*v[i+1]){
                n=v[i+1];
            }
            if(v[i]*v[i]==n){
                n=v[i];
            }
        }
        //n=max;
        ans=ans+1;
        helper(n,ans);
    }
    else if(v.size()==1){
        n=v[0];
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