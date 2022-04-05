class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int m = matrix[0].size();
        int ans = 0;
        priority_queue<vector<int>,vector<vector<int>> ,greater<>> pq;
        for(int i=0;i<min(n,k);i++)
        {
            pq.push({matrix[i][0],i,0});
        }
        for(int i=1;i<=k;i++)
        {
            auto top = pq.top();
            pq.pop();
            int r = top[1],c = top[2];
            ans= top[0];
            if(c+1<m) pq.push({matrix[r][c+1],r,c+1});
        }
        return ans;
        // int n = matrix.size();
        // int m = matrix[0].size();
        // int ans = 0;
        // vector<int> v;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         v.push_back(matrix[i][j]);
        //     }
        // }
        // sort(v.begin(),v.end());
        // return v[k-1];
        //return 0;
    }
};
//1   5  9 
//10 11 13
//12 13 15


