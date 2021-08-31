#include<bits/stdc++.h>
using namespace std;
bool isXOR(vector<int> &v,int index,int a){
    int ans=0;
    for(int i=index;i<a+1;i++){
        ans=ans^(v[i]);
    }
    if(ans%int((pow(2,index+1)))==0){
        return true;
    }
    return false;
}

void helper(int index,vector<int> &v,vector<vector<int>> &ans,vector<int> &path){
    if(index==v.size()){
        ans.push_back(path);
        return;
    }
    for(int i=index;i<v.size();++i){
        if(isXOR(v,index,i)){
            for(int j=index;j<i-index+1;j++){
                path.push_back(v[j]);
            }
            helper(i+1,v,ans,path);
            path.pop_back();
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        vector<vector<int>> ans;
        vector<int> path;
        helper(0,v,ans,path);
        cout<<ans.size()<<endl;
    }
}