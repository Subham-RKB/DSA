class Solution {
public:
    string greatestLetter(string s) {
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        for(int i = 0;i<s.length();i++)
        {
            if(s[i]>= 'a' && s[i]<='z')
            {
                v1[s[i]-'a']++;
            }
            else{
                v2[s[i]-'A']++;
            }
        }
        int k  =-1;
        string ans = "";
        for(int i=0;i<26;i++)
        {
            if(v1[i]>0 && v2[i]>0)
            {
                k = i;
            }
        }
        if(k==-1) return ans;
        return ans+char(k+65);
    }
};