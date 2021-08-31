class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans;
        multimap<int,int> m;
        for(int i=0;i<mat.size();i++){
            int count=0;
            int j=0;
            while(j<mat[i].size() && mat[i][j]){
                count++;
                j++;
            }
            m.insert(pair<int,int>(count,i));
        }
        for(auto a:m){
            if(k<=0) break;
            ans.push_back(a.second);
            k--;
        }
        return ans;
    }
};