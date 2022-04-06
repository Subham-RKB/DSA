class Solution {
public:
    int threeSumMulti(vector<int>& arr, int t) {
        int fq[101]={0};
        int mx= 0;
        int ans = 0;
        int mod = 1000000007;
        for(auto &i:arr)
        {
            fq[i]++;
            mx= max(mx,i);
        }
        for(int i=0;i<=mx;i++)
        {
            if(i+i+i==t) ans+=(((long)fq[i] * (fq[i] - 1) * (fq[i] - 2)) / 6)%mod;
            for(int j = i+1;j<=mx;j++)
            {
                if(i+i+j==t) ans+= (((fq[i]*(fq[i]-1))/2)*fq[j])%mod;
                else if(i+j+j==t) ans+= (((fq[j]*(fq[j]-1))/2)*fq[i])%mod;
                else ans+=(t-i-j>j && t-i-j<=mx? fq[i]*fq[j]*fq[t-i-j]:0)%mod;
            }
        }
        return ans;
    }
};