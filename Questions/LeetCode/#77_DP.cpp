class Solution {
public:
    set<vector<int>> vv;
    int nn;
    void helper(vector<int>&v,int i,int k,vector<int>& s){
        if(s.size()==k){
            vv.insert(s);
        }
        if(i>=nn){
            return;
        }
        s.push_back(v[i]);
        helper(v,i+1,k,s);
        s.pop_back();
        helper(v,i+1,k,s);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> v;
        nn=n;
        for(int i=0;i<n;i++){
            v.push_back(i+1);
        }
        vector<int> s;
        helper(v,0,k,s);
        vector<vector<int>> answer;
        for(auto& i:vv){
            answer.push_back(i);
        }
        return answer;
    }
};