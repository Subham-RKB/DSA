class Solution {
public:
    int dst;
    vector<vector<int>> answer;
    vector<int> ans;
    void helper(vector<vector<int>>& graph,int src=0){
        ans.push_back(src);
        if(src==dst){
            answer.push_back(ans);
        }
        else{
        //visited[src]=true;
        for(int i=0;i<graph[src].size();i++){
            //if(!visited[graph[src][i]]){
                //ans.push_back(graph[src][i]);
                helper(graph,graph[src][i]);
                    
            //}
        }
        }
        ans.pop_back();
        //visited[src]=false;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dst=graph.size()-1;
        helper(graph);
        return answer;
    }
};