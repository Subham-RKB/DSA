class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ss(26,0),pp(26,0);
        for(int i=0;i<p.length();i++){
            pp[p[i]-'a']++;
        }
        vector<int> ans;
        for(int i=0;i<s.length();i++){
            ss[s[i]-'a']++;
            if(i>=p.size()){
                ss[s[i-p.size()]-'a']--;
            }
            if(ss==pp){
                ans.push_back(i-p.size()+1);
            }
        }
        return ans;
    }
};