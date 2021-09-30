class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int> v(n,0);
        int count=0;
        queue<int> q;
        for(int i=0;i<n;i++){
            
            if(v[i]==0)
            {   
                q.push(i);
                count++;
            }
            while(!q.empty()){
                int a=q.front();
                q.pop();
                v[a]=1;
                for(int i=0;i<n;i++){
                    if(isConnected[a][i]==1 && v[i]==0){
                        q.push(i);
                    }
                }
            }
        }
        return count;
    }
};