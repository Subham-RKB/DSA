class Solution {
public:
     vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
         int n=graph.size();
         unordered_map<int,vector<int>> next;
         unordered_map<int,int> odegree;
         unordered_map<int,bool> visited;
         for(int i=0;i<n;i++){
             odegree[i]=graph[i].size();
             visited[i]=false;
             for(auto j:graph[i]) next[j].push_back(i);
         }
         vector<int> ans;
         while(1){
             bool flag = false;
             for(int i=0;i<n;i++){
                 if(odegree[i]==0 && !visited[i]){
                     flag=true;
                     visited[i]=true;
                     ans.push_back(i);
                     for(auto j:next[i]) --odegree[j];
                 }
             }
             if(!flag) break;
             
         }
         sort(ans.begin(),ans.end());
         return ans;
        
         //     set<int> s;
    //     for(int i=0;i<graph.size();i++){
    //         if(graph[i].size()==0){
    //             s.insert(i);
    //         } 
    //     }
    //     vector<int> ans;
    //     queue<int> q;
    //     for(int i=0;i<graph.size();i++){
    //         q.push(i);
    //         while(!q.empty()){
    //             int a=q.front();
    //             q.pop();
    //             int c=1;
    //             for(int ii=0;ii<graph[a].size();ii++){
    //                 if(s.find(graph[a][ii])!=s.end()){
    //                     ans.push_back(a);
    //                     s.insert(a);
    //                     c=0;
    //                     break;
    //                 }
    //                 else{
    //                     q.push(graph[a][ii]);
    //                 }
    //                 //if(c==0) break;
    //             }
    //             if(c==0) break;
    //         }
    //     }
    //     return ans;
    
    }
};