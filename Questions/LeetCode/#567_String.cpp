class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       vector<int> s11(26,0),s22(26,0);
        for(char i:s1){
            s11[i-'a']++;
        }
        for(int i=0;i<s2.length();i++){
            s22[s2[i]-'a']++;
            if(i>=s1.length()){
                s22[s2[i-s1.length()]-'a']--;
            }
            if(s11==s22) return true;
        }
        return false;
    }
};