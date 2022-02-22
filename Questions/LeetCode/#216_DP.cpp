class Solution {
public:
    void helper(vector<vector<int>>& r,vector<int>& path,int start,int k,int t){
        if(t==0 && k ==0){
            r.push_back(path);
            return;
        }
        for(int i=start;i<=10-k && i<=t;i++){
            path.push_back(i);
            helper(r,path,i+1,k-1,t-i);
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> path;
        helper(result,path,1,k,n);
        return result;
    }
};