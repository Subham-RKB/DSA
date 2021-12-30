class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        vector<pair<int,int>> v;
        for(int i=0;i<p.size();i++){
            v.push_back(make_pair((pow(p[i][0],2)+pow(p[i][1],2)),i));
        }
        vector<vector<int>> ans;
        sort(v.begin(),v.end());
        int a=0;
        while(k--){
            ans.push_back(p[v[a].second]);
            a++;
        }
        return ans;
    }
};