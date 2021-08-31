class Solution {
public:
    int strStr(string haystack, string needle) {
        int a=0;
        int h=haystack.length();
        int n=needle.length();
        int b=0;
        if(n==0) return 0;
        if(h==0) return -1;
        if(h==1 && n==1){
            return (haystack == needle? 0:-1);
        }
        for(int i=0;i+n<=h;i++){
            string s=haystack.substr(i,n);
            if(s==needle){
                return i;
            }
        }
        return -1;
    }
};