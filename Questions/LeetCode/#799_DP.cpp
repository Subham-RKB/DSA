class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double dp[101][101]={0.0};
        dp[0][0]=poured;
        for(int i=0;i<100;i++){
            for(int j=0;j<=i;j++){
                if(dp[i][j]>=1){
                    dp[i+1][j]+=(dp[i][j]-1)/2.0;
                    dp[i+1][j+1]+=(dp[i][j]-1)/2.0;
                    dp[i][j]=1;
                }
            }
        }
        return dp[query_row][query_glass];
        // double ans=0;
        // int t= (query_row)*(query_row+1)/2;
        // if(poured<=t) return ans;
        // double ok= 1.0/(pow(2,query_row));
        // double amt=poured-t;
        // if(query_glass==0 || query_glass==query_row){
        //     return (ok*poured);
        // }
        // return (ok*poured*2);
    }
};