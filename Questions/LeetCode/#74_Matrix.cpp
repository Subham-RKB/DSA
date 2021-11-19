class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int row=-1;
        for(int i=0;i<r;i++){
            if(target==matrix[i][0] || target==matrix[i][c-1]){
                return true;
            }
            else if(target>matrix[i][0] && matrix[i][c-1]>target){
                row=i;
                break;
            }
        }
        if(row==-1) return false;
        int s=0;
        int e=c;
        while(s<e){
            int m=(s+e)/2;
            if(matrix[row][m]==target) return true;
            else if (matrix[row][m]>target) e=m;
            else s=m+1;
        }
        return false;
    }
};