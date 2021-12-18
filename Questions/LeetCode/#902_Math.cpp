class Solution {
public:
    int atMostNGivenDigitSet(vector<string>& digits, int n) {
        string upperLimit=to_string(n);
        int digit = upperLimit.size(),digitsize=digits.size(),result =0;
        for(int i=1;i<digit;i++){
            result=result+pow(digitsize,i);
        }
        for(int i=0;i<digit;i++){
            bool ok=false;
            for(string &d:digits){
                if(d[0]<upperLimit[i]) result+=pow(digitsize,digit-i-1);
                else if(d[0]==upperLimit[i]) ok=true;
            }
            if(ok==false) return result;
        }
        return result+1;
    }
};