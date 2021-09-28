class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        //     unordered_map<int,vector<int>> m;
        //     for(auto a:edges){
        //         m[a[0]].push_back(a[1]);
        //         m[a[1]].push_back(a[0]);
        //     }
        // vector<int> answer;
        // if(n==1) return {0};
        // for(int i=0;i<n;i++){
        //     for(auto a:m[i]){
        //         if(m[a].size()==1 && m[a][0]==i){
        //             answer.push_back(i);
        //             break;
        //         }
        //     }
        // }
        // return answer;
        if(n==1) return {0};
        vector<unordered_set<int>> m(n);
        for(auto& a:edges){
            m[a[0]].insert(a[1]);
            m[a[1]].insert(a[0]);
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(m[i].size()==1) q.push(i);
        }
        while(n>2){
            int c=q.size();
            n=n-c;
            for(int i=0;i<c;i++){
                int k=q.front();
                q.pop();
                for(auto& a:m[k]){
                    m[a].erase(k);
                    if(m[a].size()==1) q.push(a);
                }
            }
            
        }
        vector<int> result;
        while(!q.empty()){
            result.push_back(q.front());
            q.pop();
        }
        return result;
    }
};