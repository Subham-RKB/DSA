class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int j = n-1;
        for(int i=0;i<n;i++)
        {
            if(grid[i][i]==0){
                //cout<<"ok1"<<endl;
                return false;
            }
            if(grid[i][j]==0)
            {
                //cout<<"ok2"<<endl;
                return false;
            }
            j--;
        }
        for(int i = 0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i+j!=n-1 && i!=j && grid[i][j]!=0)
                {
                    //cout<<"ok3"<<endl;
                    return false;
                }
            }
        }
        return true;
        
    }
};