class Solution {
public:
    bool helper(vector<int> &v,int target,int k){
        int s=0;
        int e=k;
        while(s<=e)
        {
            int mid = (s+e)/2;
            if(v[mid]>target)
            {
                e=mid-1;
            }
            else if(v[mid]<target)
            {
                s=mid+1;
            }
            else{
                return true;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        int m = matrix.size();
        if(m==0) return false;
        int i = 0;
        int j = n-1;
        while(i<m && j>=0)
        {
            if(matrix[i][j]==target)
            {
                return true;
            }
            else if(matrix[i][j]>target)
            {
                j--;
            }
            else{
                i++;
            }
        }
        // int k = matrix[0].size()-1;
        // int l = matrix.size()-1;
        // while(matrix[0][k]>target && k>=0)
        // {
        //     k--;
        // }
        // cout<<k<<endl;
        // if(k<0) return false;
        // if(matrix[0][k]==target) return true;
        // while(matrix[l][0]>target && l>=0)
        // {
        //     l--;
        // }
        // cout<<l<<endl;
        // if(l<0) return false;
        // if(matrix[l][0]==target) return true;
        // for(int i=0;i<=l;i++)
        // {
        //     if(helper(matrix[i],target,k)){
        //         return true;
        //     }
        // }
        return false;
    }
};
