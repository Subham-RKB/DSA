class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        int i=0;
        int j=s.length()-1;
        while(i<j){
        while (isalnum(s[i]) == false && i < j) i++;
        while (isalnum(s[j]) == false && i < j) j--;
        if ((s[i]) != (s[j])) return false;
        i++;j--;
        }
    
    return true;
    }
};