class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        queue<vector<int>> q;
        int r=image.size();
        int c=image[0].size(); 
        q.push({sr,sc});
        int a=image[sr][sc];
        image[sr][sc]=-1;
        while(!q.empty()){
            vector<int> v=q.front();
            q.pop();
            if(v[0]-1>=0 && image[v[0]-1][v[1]]==a){
                image[v[0]-1][v[1]]=-1;
                q.push({v[0]-1,v[1]});
            }
            if(v[0]+1<r && image[v[0]+1][v[1]]==a){
                image[v[0]+1][v[1]]=-1;
                q.push({v[0]+1,v[1]});
            }
            if(v[1]+1<c && image[v[0]][v[1]+1]==a){
                image[v[0]][v[1]+1]=-1;
                q.push({v[0],v[1]+1});
            }
            if(v[1]-1>=0 && image[v[0]][v[1]-1]==a){
                image[v[0]][v[1]-1]=-1;
                q.push({v[0],v[1]-1});
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(image[i][j]==-1){
                    image[i][j]=newColor;
                }
            }
        }
        return image;
    }
};