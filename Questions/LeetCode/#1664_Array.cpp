class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int even1 =0;
        int odd1 = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(i%2==0) even1+=nums[i];
            else odd1+=nums[i];
        }
        int even2=0;
        int odd2= 0;
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0) even1-=nums[i];
            else odd1-=nums[i];
            if(odd2+even1 == odd1+even2) ans++;
            if(i%2==0) even2+=nums[i];
            else odd2+=nums[i];
        }
        return ans;
    }
};