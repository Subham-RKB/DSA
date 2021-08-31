class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        if(x<0) {return false;}
        long int s=0;
         while(x>0){
            s=s*10+x%10;
            x=x/10;
        }
        if(s==y) {return true;}
        return false;
    }
};