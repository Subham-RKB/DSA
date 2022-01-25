class Solution {
public:
    int helper(vector<vector<int>>& s,int id,vector<bool>& vis,int &n){
        vis[id]=true;
        int res=0;
        for(int i=0;i<n;i++){
            if(!vis[i]&&(s[i][0]==s[id][0] || s[i][1]==s[id][1])){
                res+=(helper(s,i,vis,n)+1);
            }
        }
        return res;
    }
    int removeStones(vector<vector<int>>& s) {
        int n=s.size();
        vector<bool> vis(n,false);
        int res=0;
        for(int i=0;i<n;i++){
            if(vis[i]){
                continue;
            }
            res+=helper(s,i,vis,n);
        }
        return res;
    }
};