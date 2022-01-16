class Solution {
public:
    int n;
    vector<long long int> dp;
    long long helper(vector<vector<int>>& v,int i){
        if(i>n-1){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i]; 
        }
        dp[i] = max(v[i][0]+helper(v,i+v[i][1]+1),helper(v,i+1));
        return dp[i];
    }
    long long mostPoints(vector<vector<int>>& q) {
        n=q.size();
        for(int i=0;i<=n;i++){
            dp.push_back(-1);
        }
        return helper(q,0);
    }
};