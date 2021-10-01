class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int> v(n,0);
        int aa=0;
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int a=q.front();
            q.pop();
            n--;
            v[a]=1;
            for(int i=0;i<rooms[a].size();i++){
                if(v[rooms[a][i]]==0){
                    q.push(rooms[a][i]);
                    v[rooms[a][i]]=1;
                }
            }
        }
        return n==0;
    }
};