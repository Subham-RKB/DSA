class Solution {
public:
    vector<vector<int>> answer;
    void helper(vector<int> & candidates, int t,int n,vector<int> &s){
        if(n==candidates.size()){
            if(t==0){
                answer.push_back(s);
            }
            return;
        }
        if(candidates[n]<=t){
            s.push_back(candidates[n]);
            helper(candidates,t-candidates[n],n,s);
            s.pop_back();
        }
        helper(candidates,t,n+1,s);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> s;
        helper(candidates,target,0,s);
        return answer;
    }
};