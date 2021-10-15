class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector<vector<int>> m(n);
        for(int i=0;i<paths.size();i++){
            m[paths[i][0]-1].push_back(paths[i][1]-1);
            m[paths[i][1]-1].push_back(paths[i][0]-1);
        }
        //vector<int> v(n+1,0);
        vector<int> ans(n);
        for(int k=0;k<m.size();k++){
            int colors[5] = {};
            for(int j: m[k]){
                colors[ans[j]]=1;
            }
            for(int kk=4;kk>0;kk--){
                if(!colors[kk]){
                    ans[k]=kk;
                    break;
                }
            }
            
        }
        return ans;
    }
};