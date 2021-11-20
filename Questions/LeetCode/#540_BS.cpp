class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int l=0;
        int r=n-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(m%2){
                if(nums[m-1]==nums[m]) l=m+1;
                else r=m-1;
            }
            else{
                if(nums[m]==nums[m+1]) l=m+1;
                else r=m-1;
            }
        }
        return nums[l];
    }
};