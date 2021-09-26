class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n=grid[0].size();
        long long int grid1[2][50005];
        for(int i = 1; i <= n; ++i) {
            grid1[0][i] = grid1[0][i-1] + grid[0][i-1];
            grid1[1][i] = grid1[1][i-1] + grid[1][i-1];
        }
        long long int ans = 1e18;
        for(int i = 1; i <= n; ++i) {
            ans = min(ans, max(grid1[0][n] - grid1[0][i], grid1[1][i-1]));
        }
        return ans;
//         vector<long long int> p(n+1,0);
//         vector<long long int> pp(n+1,0);
//         for(int i=0;i<n;i++){
//             p[i+1]=p[i]+grid[0][i];
//             pp[i+1]=pp[i]+grid[1][i];
//         }
        
//         // for(int i=1;i<n;i++){
//         //     grid[0][i]=grid[0][i]+grid[0][i-1];
//         //     //cout<<grid[0][i]<<" ";
//         // }
//         // //cout<<endl;
//         // for(int i=1;i<n;i++){
//         //     grid[1][i]=grid[1][i]+grid[1][i-1];
//         //     //cout<<grid[1][i]<<" ";
//         // }
//         //cout<<endl;
//         long long int a=INT_MAX;
//         for(int i=0;i<n;i++){
//             //a=max(a,min(grid[0][n-1]-grid[0][i],grid[1][0]-grid[1][i]));
//             // if(abs(grid[0][i]-grid[1][i])<a){
//             //     a=abs(grid[1][i]-grid[0][i]);
//             //     answer=i;
//             // }
//             a=min(a,max((p[n]-p[i+1]),pp[i]));
//         }
//         return a;
//         //return (grid[0][n-1]-grid[0][answer])>(grid[1][0]-grid[1][answer])?grid[0][n-1]-grid[0][answer]:grid[1][0]-grid[1][answer];
//         // int ans=0;
//         // int answer=0;
//         // for(int i=0;i<n;i++){
//         //     int a=grid[0][i]+grid[1][i];
//         //     if(a>ans){
//         //         ans=a;
//         //         answer=i;
//         //     }
//         // }
//         // //cout<<ans<<endl;
//         // return (grid[0][n-1]-grid[0][answer])>(grid[1][0]-grid[1][answer])?grid[0][n-1]-grid[0][answer]:grid[1][0]-grid[1][answer];
//         // if(answer==n-1){
//         //     return grid[1][0]-grid[1][n-1];
//         // }
//         // if(answer==0){
//         //     return grid[0][n-1]-grid[0][0];
//         // }
//         // return grid[0][answer+1]>grid[1][answer-1]?(grid[0][answer+1]-grid[0][answer]):(grid[1][answer-1]-grid[1][answer]);
//         // vector<int> pre(n,0);
//         // vector<int> post(n,0);
//         // for(int i=0;i<grid[0].size();i++){
//         //     pre[i]=pre[i]+grid[0][i];
//         // }
//         // for(int i=grid[0].size()-1;i>=0;i--){
//         //     post[i]=post[i]+grid[1][i];
//         // }
//         // int ans=0;
//         // int y;
//         // int s=0;
//         // int ss=0;
//         // for(int i=0;i<grid[0].size();i++){
//         //     if((pre[i]+post[i])>ans){
//         //         ans=pre[i]+post[i];
//         //         y=i;
//         //         s=pre[i];
//         //         ss=post[i];
//         //     }
//         // }
//         // if((pre[pre.size()-1]-s)>(post[0]-ss)){
//         //     return pre[pre.size()-1]-s;
//         // }
//         // return post[0]-ss;
    }
};