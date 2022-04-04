class Solution {
public:
    int arr[1001][1001];
    void helper(int a,int n)
    {
        for(int i=0;i<n;i++)
        {
            arr[a][i]=(arr[a-1][i]+arr[a-1][i+1])%10;
            cout<<arr[a][i]<<" ";
        }
        cout<<endl;
    }
    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        int m = n;
        for(int i=0;i<n;i++)
        {
            arr[0][i]=nums[i];
            cout<<arr[0][i]<<" ";
        }
        cout<<endl;
        int a = 1;
        while(n>1)
        {
            // helper(a,n);
            // a++;
            // n-=1;
            for(int i=0;i<n-1;i++)
            {
                nums[i]=(nums[i]+nums[i+1])%10;
            }
            n--;
        }
        return nums[0];
    }
};