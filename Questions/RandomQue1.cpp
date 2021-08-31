#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> vvv;
void helper(unordered_map<int,vector<int>> m,vector<int> v){
    for(auto i:m){
        int add=v[i.first];
        vector<int> vv=i.second;
        for(int j=0;j<vv.size();j++){
            add=add*v[vv[j]];
            if(m.find(vv[j])!=m.end()){
                helper(m,v);
            }
            else{
                vvv.push_back(add);
            }
        }
        break;
    }
}
int main()
{
    ll n;
    cin>>n;
    unordered_map<int,vector<int>> m;
    vector<int> v;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        v.push_back(b);
    }
    for(int i=0;i<n-1;i++){
        int c,d;
        cin>>c>>d;
        if(m.find(c)!=m.end()){
            m[c].push_back(d);
        }
        else{
            vector<int> v;
            v.push_back(d);
            m.insert({c,v});
        }
    }
    helper(m,v);
    cout<< *max_element(vvv.begin(),vvv.end())<<endl;
}