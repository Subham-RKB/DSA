class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        //vector<int> v(n);
        // v[0]=nums[0];
        // for(int i=1;i<n;i++)
        // {
        //     v[i]=nums[i]+v[i-1];
        // }
        int l = 1;
        int h = n;
        int ans = 0;
        while(l<=h)
        {
            int m = (h+l)/2;
            int sum = 0;
            for(int i=0;i<n;i++)
            {
                if(i>=m) sum-=nums[i-m];
                sum+=nums[i];
                if(sum>=target) break;
            }
            if(sum>=target)
            {
                h=m-1;
                ans = m;
            }
            else{
                l=m+1;
            }
        }
        return ans;
    }
};