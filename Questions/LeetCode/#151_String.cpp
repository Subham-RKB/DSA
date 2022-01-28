class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string ok="";
        s+=' ';
        int a=0;
        while(s[a]==' '){
            a++;
        }
        for(int i=a;i<s.length();i++){
            if(s[i]!=' '){
                ok+=s[i];
            }
            else{
                ans=ok+" "+ans;
                ok="";
                while(s[i]==' '){
                    i++;
                }
                i--;
            }
        }
        return ans.substr(0,ans.length()-1);
    }
};