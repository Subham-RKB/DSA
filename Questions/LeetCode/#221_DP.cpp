class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int r= matrix.size();
        int c= matrix[0].size();
        int answer=0;
        if(r==0) return 0;
        vector<vector<int>> dp(r+1,vector<int>(c+1,0));
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                if(matrix[i-1][j-1]=='1'){
                    dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
                    if(answer<dp[i][j]){
                        answer=dp[i][j];
                    }
                }
            }
        }
        //return answer*answer;
        // for(int i=1;i<r;i++){
        //     for(int j=1;j<c;j++){
        //         if(matrix[i][j]!=0 && matrix[i-1][j-1]!=0){
        //             if(matrix[i-1][j]!=0 && matrix[i][j-1]!=0){
        //                 if(matrix[i-1][j]==matrix[i][j-1]){
        //                     matrix[i][j]=matrix[i-1][j]+1;
        //                 }
        //                 else{
        //                     matrix[i][j]=min(matrix[i-1][j],matrix[i][j-1]);
        //                 }
        //             }
        //         }
        //     }
        // }
//         for(int i=0;i<r-1;i++){
//             for(int j=0;j<c-1;i++){
//                 if(matrix[i][j]=='1'){
//                     int a=i+1;
//                     int b=j+1;
//                     int f=1;
//                     int area=1;
//                     while(f){
//                         if(matrix[a][j]!='1' || matrix[i][b]!='1'){
//                             break;
//                         }
//                         for(int l=a;l<b;l++){
//                             if(matrix[a][l]!='1') f=0;
//                         }       
//                         for(int k=b;k<a;k++){
//                             if(matrix[k][b]!='1') f=0;
//                         }
//                         if(f!=0){
//                             area++;
//                             a++;
//                             b++;
//                         }
//                     }
//                     if((area*area)>answer){
//                         answer=area*area;
//                     }
                    
//                 }
//             }
//         }
//         return answer;
        return answer*answer;
    }
};