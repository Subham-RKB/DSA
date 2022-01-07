class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        if (grid.empty()) {
            return 0;
        }
        vector<int> col(grid.size());
        vector<int> row(grid[0].size());
        for (int i = 0; i < grid.size();i++) {
            int mx = 0;
            for (int j = 0; j < grid[i].size();j++) {
                mx = max(mx, grid[i][j]);
            }
            col[i] = mx;
        }
        for (int j = 0; j < grid[0].size();j++) {
            int mx = 0;
            for (int i = 0; i < grid.size();i++) {
                mx = max(mx, grid[i][j]);
            }
            row[j] = mx;
        }
        int arr[grid.size()][grid.size()];
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                arr[i][j]=min(row[j],col[i]);
                //cout<<arr[i][j]<<" ";
            }
            //cout<<endl;
        }
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                ans+=abs(grid[i][j]-arr[i][j]);
            }
        }
        return ans;
    }
};