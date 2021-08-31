class Solution {
public:
    int mySqrt(int x) {
        long long int a=0;
        long long int b=x;
        long long int mid,ans;
        while(a<=b){
            mid=(a+b)/2;
            if(mid*mid==x){
                ans=mid;
                break;
            }
            else if(mid*mid<x){
                ans=mid;
                a=mid+1;
            }
            else{
                b=mid-1;
            }
        }
        return ans;
    }
};