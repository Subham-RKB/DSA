#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int n,m;
        vector<vector<int>> matrix;
        void get()
        {
            cin>>n>>m;
            for(int i=0;i<n;i++)
            {
                vector<int> v;
                for(int j=0;j<m;j++)
                {
                    int a;
                    cin>>a;
                    v.push_back(a);
                }
                matrix.push_back(v);
            }
        }
        void print(vector<vector<int>>& v)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cout<<v[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        void setMatrixZero(vector<vector<int>> &matrix)
        {
            int a = 1;
            int n = matrix.size();
            int m = matrix[0].size();
            for(int i=0;i<n;i++)
            {
                if(matrix[i][0]==0) a=0;
                for(int j =1;j<m;j++)
                {
                    if(matrix[i][j]==0)
                    {
                        matrix[i][0]=0;
                        matrix[0][j]=0;
                    }
                }
            }
            for(int i=n-1;i>=1;i--)
            {
                for(int j=m-1;j>=1;j--)
                {
                    if(matrix[i][0]==0 || matrix[0][j]==0)
                    {
                        matrix[i][j]=0;
                    }
                }
                if(a==0)
                {
                    matrix[i][0]=0;
                }
            }
            //return matrix;
        }
};
int main()
{
    Solution S;
    S.get();
    S.setMatrixZero(S.matrix);//s.setMatrixZero(s.matrix));
    S.print(S.matrix);
    
}