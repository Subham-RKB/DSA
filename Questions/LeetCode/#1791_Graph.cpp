class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        // vector<int> m(edges.size()+2,0);
        // for(int i=0;i<edges.size();i++){
        //     m[edges[i][0]]++;
        //     m[edges[i][1]]++;
        // }
        // for(auto i:m){
        //     if(i==edges.size()){
        //         return i-1;
        //     }
        // }
        // return -1;
        int ans=0;
        if(edges[0][0]==edges[1][0] || edges[0][1]==edges[1][0]){
            ans=edges[1][0];
        }
        else if(edges[0][0]==edges[1][1] || edges[0][1]==edges[1][1]){
            ans=edges[1][1];
        }
        return ans;
    }
};