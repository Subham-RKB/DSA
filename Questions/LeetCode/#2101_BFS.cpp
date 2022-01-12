class Solution {
public:
    bool explode(vector<int>& b1,vector<int> &b2){
        int x1=b1[0],y1=b1[1],x2=b2[0],y2=b2[1],r=b1[2];
        return (pow(x1-x2,2)+pow(y1-y2,2)-1.0*r*r<=0.0);
    }
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n=bombs.size();
        vector<vector<int>> v(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && explode(bombs[i],bombs[j])){
                    v[i].push_back(j);
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            vector<int> vis(n,0);
            queue<int> q;
            q.push(i);
            vis[i]=1;
            int count=0;
            while(!q.empty()){
                int a= q.front();
                q.pop();
                count++;
                for(int &i:v[a]){
                    if(vis[i]==0){
                        vis[i]=1;
                        q.push(i);
                    }
                }
            }
            ans=max(ans,count);
            if(count==n){
                break;
            }
        }
        return ans;
    }
};