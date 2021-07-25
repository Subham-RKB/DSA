class Solution {
public:
    int numDecodings(string s) {
        int dp[s.length()+1];
        dp[0]=1;
        if(s[0]=='0') return 0;
        else dp[1]=1;
        for(int i=2;i<s.length()+1;i++){
            if(s[i-1]=='0'){
                if(s[i-2]=='1' || s[i-2]=='2'){
                    dp[i]=dp[i-2];
                }
                else{
                    return 0;
                }
            }
            else{
                if((s[i-2]=='1' || s[i-2]=='2' && ((s[i-1]-'0')<7))){
                    dp[i]=dp[i-1] +dp[i-2];
                    
                }
                else{
                    dp[i]=dp[i-1];
                }
            }
        }
        return dp[s.length()];
    }
};