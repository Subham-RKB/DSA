class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> v;
        int a1=0;
        int b1=m-1;
        int b2=n-1;
        int t=n*m;
        while(t){
            for(int i=a1;i<m;i++){
                v.push_back(matrix[a1][i]);
                //cout<<matrix[a1][i]<<" ";
                t--;
            }
            if(t==0) break;
            //cout<<endl;
            for(int i=a1+1;i<n;i++){
                v.push_back(matrix[i][b1]);
                //cout<<matrix[i][b1]<<" ";
                t--;
            }
            if(t==0) break;;
            //cout<<endl;
            for(int i=b1-1;i>=a1;i--){
                v.push_back(matrix[b2][i]);
                //cout<<matrix[b2][i]<<" ";
                t--;
            }
            if(t==0) break;
            //cout<<endl;
            for(int i=b2-1;i>a1;i--){
                v.push_back(matrix[i][a1]);
                //cout<<matrix[i][a1]<<" ";
                t--;
            }
            if(t==0) break;
            //if(t==0) break;
            //cout<<endl;
            a1++;
            b1--;
            b2--;
            n--;
            m--;
        }
        return v;
    }
};