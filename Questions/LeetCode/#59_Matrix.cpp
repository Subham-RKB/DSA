class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n,vector<int>(n));
        int m=n;
        int a1=0;
        int b1=m-1;
        int b2=n-1;
        int t=n*m;
        int u=1;
        while(t){
            for(int i=a1;i<m;i++){
                v[a1][i]=u++;
                //cout<<matrix[a1][i]<<" ";
                t--;
            }
            if(t==0) break;
            //cout<<endl;
            for(int i=a1+1;i<n;i++){
                v[i][b1]=u++;
                //cout<<matrix[i][b1]<<" ";
                t--;
            }
            if(t==0) break;;
            //cout<<endl;
            for(int i=b1-1;i>=a1;i--){
                v[b2][i]=u++;
                //cout<<matrix[b2][i]<<" ";
                t--;
            }
            if(t==0) break;
            //cout<<endl;
            for(int i=b2-1;i>a1;i--){
                v[i][a1]=u++;
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