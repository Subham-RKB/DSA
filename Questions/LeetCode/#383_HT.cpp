class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        for(char a:magazine){
            m[a]++;
        }
        for(char b:ransomNote){
            if(m.find(b)==m.end()) return false;
            if(m[b]<=0){
                return false;
            }
            m[b]--;
        }
        return true;
    }
};