class Solution {
public:
    int countPrimes(int n) {
        if(n<2) return 0;
        int t[n+1];
        memset(t,1,sizeof(t));
        t[0]=t[1]=0;
        for(int i=2;i*i<n;i++){
            if(t[i]){
            for(int j=i*i;j<n;j+=i){
                t[j]=0;
            }
            }
        }
        int ans=0;
        for(int i=2;i<n;i++){
            if(t[i]){
                ans=ans+1;
            }
        }
        return ans;
    }
};