class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        set<pair<int,int>> v;
        for(int i = 0;i<circles.size();i++)
        {
            int a = circles[i][0];
            int b = circles[i][1];
            int c = circles[i][2];
            for(int j = -c;j<=c;j++)
            {
                for(int k = -c;k<=c;k++)
                {
                    if(((k*k)+(j*j))<=(c*c))
                    {
                        v.insert({j+a,k+b});
                    }
                }
            }
        }
        int ans = v.size();
        return ans;
        
    }
};