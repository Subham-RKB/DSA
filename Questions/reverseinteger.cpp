class Solution {
public:
    int reverse(int x) {
        long int s=0;
        int y=x;
        if(x<0){
            x=abs(x);
        }
        int r=0;
        int neg=0;
       
        while(x>0){
            s=s*10+x%10;
            x=x/10;
        }
            if (s<INT_MIN || s>INT_MAX)return 0;
        if(y<0) s=-s;
        return s;
    }
};