class Solution {
public:
    int percentageLetter(string s, char letter) {
        vector<int> v(26,0);
        for(int i = 0;i<s.length();i++)
        {
            v[s[i]-'a']++;
        }
        return floor(((v[letter-'a'])*100)/s.size());
        
    }
};