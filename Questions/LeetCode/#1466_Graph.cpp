class Solution {
public:
    unordered_map<int,vector<int>> adj,back;
    int count =0;
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<bool> visited(n,false);
        for(auto edge:connections){
            adj[edge[0]].push_back(edge[1]);
            back[edge[1]].push_back(edge[0]);
        }
        dfs(0,visited);
        return count;
    }  
    void dfs(int root,vector<bool>& visited){
        visited[root]=true;
        for(int i:adj[root]){
            if(!visited[i]){
                count++;
                dfs(i,visited);
            }
        }
        for(int i:back[root]){
            if(!visited[i]){
                dfs(i,visited);
            }
        }
    }
};

//