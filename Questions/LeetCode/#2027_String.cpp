class Solution {
public:
    int minimumMoves(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='X'){
                i=i+2;
                ans++;
            }
        }
        return ans;
    }
};