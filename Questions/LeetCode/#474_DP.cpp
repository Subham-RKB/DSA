class Solution {
public:
    int dp[601][101][101];
    int helper(vector<vector<int>>& v,int m,int n,int size,int z,int o,int i){
        if(i>=size){
            return 0;
        }
        if(dp[i][z][o]!=0){
            return dp[i][z][o];
        }
        if(z+v[i][0]<=m && o+v[i][1]<=n){
            return dp[i][z][o]=max(1+helper(v,m,n,size,z+v[i][0],o+v[i][1],i+1),helper(v,m,n,size,z,o,i+1));
        }
        return dp[i][z][o]=helper(v,m,n,size,z,o,i+1);
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> v;
        //cout<<dp[0][0][0]<<endl;
        
        for(int i =0;i<strs.size();i++)
        {
            int zero = 0;
            int one = 0;
            for(int j=0;j<strs[i].length();j++)
            {
                if(strs[i][j]=='0'){
                    zero++;
                }
                else{
                    one++;
                }
            }
            v.push_back({zero,one});
        }
        sort(v.begin(),v.end());
        return helper(v,m,n,v.size(),0,0,0);
        //return dp[strs.size()][m][n];
    }
};