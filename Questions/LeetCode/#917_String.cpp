class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start=0;
        int end=s.length()-1;
        set<char> capital={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        set<char> small={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        while(start<end){
            // if(((s[start]>='A' && s[start]<='Z')||(s[start]>='a' && s[start]<='z')) && ((s[end]>='A' && s[end]<='Z')||(s[end]>='a' && s[end]<='z'))){
            //     swap(s[start],s[end]);
            //     start++;
            //     end--;
            // }
            // else if (!(s[start]>='A' && s[start]<='Z')||!(s[start]>='a' && s[start]<='z')){
            //     start++;
            // }
            // else if((s[end]<='A' || s[end]>='Z')|| (s[end]<='a' || s[end]>='z')){
            //     end--;
            // }
            if(capital.find(s[start])!=capital.end() || small.find(s[start])!=small.end()){
                if(capital.find(s[end])!=capital.end()|| small.find(s[end])!=small.end()){
                    swap(s[start],s[end]);
                    start++;
                    end--;
                }
                else{
                    end--;
                }
            }
            else{
                start++;
            }
        }
        return s;
        
    }
};