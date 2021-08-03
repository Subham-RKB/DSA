class Solution {
public:
    int addDigits(int num) {
        if(num<10){
            return num;
        }
        int s=0;
        while(num>0){
            s=s+num%10;
            num=num/10;
        }
        return addDigits(s);
    }
};