class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%5==0 || k%2==0){
            return -1;
        }
        else{
            int a=0;
            for(int i=1;i<=k;i++){
                a=(a*10+1)%k;
                if(a==0){
                    return i;
                }
            }
        }
        return -1;
    }
};