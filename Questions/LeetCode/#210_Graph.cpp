class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<int> v;
        vector<int> answer;
        vector<vector<int>> p=prerequisites;
        vector<vector<int>> graph(n,vector<int>());
        vector<int> indegree(n,0);
        for(int i=0;i<p.size();i++){
            graph[p[i][1]].push_back(p[i][0]);
            indegree[p[i][0]]++;
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0) {q.push(i);} 
        }
        while(!q.empty()){
            int aa=q.front();q.pop();n--;
            cout<<aa<<" ";cout<<endl;
            answer.push_back(aa);
            for(auto a:graph[aa]){
                if(--indegree[a]==0) {
                    q.push(a);
                    cout<<a<<" ";
                    //answer.push_back(a);
                }
            }
            cout<<endl;
        }
        return n==0?answer:v;
        
    }
};