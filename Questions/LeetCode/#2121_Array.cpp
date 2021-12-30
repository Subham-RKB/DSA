class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        map<int,vector<int>> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]].push_back(i);
        }
        vector<long long>pre(arr.size(),0),pre1(arr.size(),0),ans(arr.size(),0);
        for(auto &p:m){
            vector<int> a = p.second;
            for(int i=1;i<a.size();i++){
                pre[a[i]]=pre[a[i-1]]+ i*(long)(a[i]-a[i-1]);
            }
        }
        for(auto &p:m){
            vector<int> a = p.second;
            for(int i=a.size()-2;i>=0;i--){
                pre1[a[i]]=pre1[a[i+1]]+ long(a.size()-1-i)*(long)(a[i+1]-a[i]);  
            }
        }
        for(int i=0;i<arr.size();i++){
            ans[i]=pre[i]+pre1[i];
        }
        return ans;
    }
};