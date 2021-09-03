class Solution {
public:
    // void dfs(vector<int> &vis,int s,vector<vector<int>> &ar){
    //     vis[s]=1;
    //     for(int i=0;i<ar[s].size();i++){
    //         if(vis[ar[s][i]]==0){
    //             dfs(vis,ar[s][i],ar);
    //         }
    //     }
    // }
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        // vector<vector<int> > ar(n+1);
        // vector<int> v(n+1);
        // for(int i=0;i<edges.size();i++){
        //     v[i]=0;
        //     ar[edges[i][0]].push_back(edges[i][1]);
        //     ar[edges[i][1]].push_back(edges[i][0]);
        // }
        // dfs(v,start,ar);
        // if(v[end]==1){
        //     return true;
        // }
        // return false;
        unordered_map<int,vector<int>> graph;
        for(auto e:edges){
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
        }
        vector<bool> v(n,0);
        queue<int> q;
        q.push(start);
        v[start]=1;
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            if(temp==end) return true;
            for(auto &node:graph[temp]){
                if(!v[node]){
                    v[node]=1;
                    q.push(node);
                }
            }
        }
        return false;
    }
};