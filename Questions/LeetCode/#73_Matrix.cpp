class Solution {
public:
    // void helper(vector<vector<int>> &matrix,int r,int c){
    //     for(int i=0;i<r;i++){
    //         if(matrix[i][c]==0){
    //             matrix[i][c]=;
    //         }
    //         else{
    //             matrix[i][c]=0;
    //         }
    //     }
    //     for(int j=0;j<c;j++){
    //         if(matrix[r][j]==0){
    //             matrix[r][j]='a';
    //         }
    //         else{
    //             matrix[r][j]=
    //         }
    //     }
    // }
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        // for(int i=0;i<r;i++){
        //     for(int j=0;j<c;j++){
        //         if(matrix[i][j]==0){
        //             helper(matrix,i,j);
        //         }
        //     }
        // }
        set<int> row;
        set<int> col;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    if(row.find(i)==row.end()){
                        row.insert(i);
                    }
                    if(col.find(j)==col.end()){
                        col.insert(j);
                    }
                }
            }
        }
        for(auto a:row){
            for(int i=0;i<c;i++){
                matrix[a][i]=0;
            }
        }
        for(auto a:col){
            for(int i=0;i<r;i++){
                matrix[i][a]=0;
            }
        }
    }
};