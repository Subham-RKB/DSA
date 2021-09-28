class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<vector<int>> p =prerequisites;
        vector<vector<int>> graph(n,vector<int> ());
        vector<int> indegree(n,0);
        for(auto &a:p){
            graph[a[1]].push_back(a[0]);
            indegree[a[0]]++;
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int curr=q.front();q.pop();n--;
            for(auto a:graph[curr])
                if(--indegree[a]==0) q.push(a);
        }
        return n==0;
    }
};