class Solution {
public:
    int concatenatedBinary(int n) {
         //start from n to 1
        // long long ans=1;
        // for(int i=2;i<=n;i++)
        // {
        //     //calculate the bits in the current number (i)
        //     long long  num=(log(i)/log(2)) + 1;
        //     //left shift the bits as we need to append the i
        //     ans=ans<<num;
        //     cout<<ans<<" ";
        //     ans|=i;
        //     cout<<ans<<" ";
        //     ans%=1000000007;
        // }
        // cout<<endl;
        // return ans;
        long long int i,sum=1,x;
        for(i=2;i<=n;i++)
        {
            x=log2(i)+1;
            sum =sum<<x;
            sum|=i;
            sum%=1000000007;
        }
        return sum;
    }
};