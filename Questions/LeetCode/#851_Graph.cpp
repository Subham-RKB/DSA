class Solution {
public:
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int n=quiet.size();
        vector<vector<int>> graph(n);
        vector<int> indegree(n,0);
        queue<int> q;
        for(int i=0;i<richer.size();i++){
            graph[richer[i][0]].push_back(richer[i][1]);
            indegree[richer[i][1]]++;
        }
        vector<int> ans(n,INT_MAX);
        for(int i=0;i<n;i++){
            ans[i]=i;
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int a=q.front();
            q.pop();
            for(auto i:graph[a]){
                if(ans[i]==INT_MAX || quiet[ans[i]]>quiet[ans[a]])
                    ans[i]=ans[a];
                if(--indegree[i]==0)
                    q.push(i);
            }
        }
        return ans;
        
    }
};