class Solution {
public:
    int lengthOfLastWord(string s) {
        int answer=0;
     for(int i=s.length()-1;i>=0;i--)
     {
         if(s[i]==' ' and answer!=0) break; 
         if(s[i]!=' ') answer++;
     }
        return answer;
    }
};