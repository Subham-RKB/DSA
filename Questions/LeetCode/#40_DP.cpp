class Solution {
public:
    set<vector<int>> answer;
    int y=0;
    void helper(vector<int> & candidates, int t,int n,vector<int> &s){
        if(t==0){
            sort(s.begin(),s.end());
            answer.insert(s);
        }
        if(n>=candidates.size()){ 
            return;
        }
        if(candidates[n]<=t){
            s.push_back(candidates[n]);
            helper(candidates,t-candidates[n],n+1,s);
            s.pop_back();
            while(n+1<candidates.size() && candidates[n+1]==candidates[n]) n++;
            helper(candidates,t,n+1,s);
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> s;
        y=target;
        sort(candidates.begin(),candidates.end());
        helper(candidates,target,0,s);
        vector<vector<int>> ans;
        for(auto& i:answer){
            ans.push_back(i);
        }
        return ans;
    }
};