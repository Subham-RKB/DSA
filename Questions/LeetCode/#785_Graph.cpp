class Solution {
public:
    // bool helper(int v,int c,vector<vector<int>> &vv,vector<int> &vis,vector<int> &col){
    //     vis[v]=1;
    //     col[v]=c;
    //     for(int child:vv[v]){
    //         if(vis[child]==0){
    //             if(!helper(child,c^1,vv,vis,col)){
    //                 return false;
    //             }
    //         }
    //         else{
    //             if(col[v]==col[child]){
    //                 return false;
    //             }
    //         }
    //     }
    //     return true;
    // }
    bool isBipartite(vector<vector<int>>& graph) {
        // vector<int> vis(graph.size(),0);
        vector<int> col(graph.size(),0);
        for(int i=0;i<graph.size();i++){
            if(col[i]==0){
                queue<int> q;
                q.push(i);
                col[i]=1;
                while(!q.empty()){
                    int a=q.front();q.pop();
                    for(int n:graph[a]){
                        if(col[n]==col[a]) return false;
                        else if(col[n]==0){
                            q.push(n);
                            col[n]=-col[a];
                        }
                    }
                }
            }
        }
        return true;
    }
};