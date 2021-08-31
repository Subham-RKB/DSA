class Solution {
public:
    int myAtoi(string s) {
        int n=0;
        string ans="0";
        int a=0;
        while(a<s.length() && s[a]==' '){
            a++;
        }
        if(a<s.length() && s[a]=='-'){
            n=1;
            a++;
        }
        else if(a<s.length() and s[a]=='+'){
            a++;
        }
        while(a<s.length() && s[a]=='0'){
            a++;
        }
        while(a<s.length() && s[a]!=' '){
                    ans+=s[a++];
                    if(ans.length()>11)
                        break;
                    
            }
        
        long anss=stol(ans);
        if(n){
            anss*=-1;
        }
        if(anss>INT_MAX){
            return INT_MAX;
        }
        if(anss<INT_MIN){
            return INT_MIN;
        }
        return anss;
    }
};