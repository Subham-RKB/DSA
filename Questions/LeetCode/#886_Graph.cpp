class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>> graph(n+1);
        for(int i=0;i<dislikes.size();i++){
            graph[dislikes[i][0]].push_back(dislikes[i][1]);
            graph[dislikes[i][1]].push_back(dislikes[i][0]);
            
        }
        vector<int> col(n+1,0);
        for(int i=1;i<=n;i++){
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