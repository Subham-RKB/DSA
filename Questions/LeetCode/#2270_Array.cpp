class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<long long int> pre(n,0);
        vector<long long int> post(n,0);
        int k = n-1;
        for(int i = 0;i<n;i++)
        {
            if(i==0) pre[i]=nums[i];
            else pre[i]=pre[i-1]+nums[i];
            if(k==n-1) post[k]=nums[k];
            else post[k]=post[k+1]+nums[k];
            k--;
        }
        int count=0;
        for(int i =0;i<n-1;i++)
        {
            if(pre[i]>=post[i+1]){
                count++;
            }
        }
        return count;
    }
};