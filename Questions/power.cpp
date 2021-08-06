class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        if(x==1.00000){
            return x;
        }
        if(n>0){
        while(n){
            if(n%2){
                ans*=x;
                n--;
            }
            else{
                x*=x;
                n/=2;
            }
        }
        }
        else{
            //n=n*(-1);
            while(n){
            if(n%2){
                ans/=x;
                n++;
            }
            else{
                x*=x;
                n/=2;
            }
        }
        }
        return ans;
    }
};