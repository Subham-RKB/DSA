class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        if(nums[n-1]<target){
            return nums.size();
        }
        int a=0;
        int b=nums.size()-1;
        int mid=0;
        int ans=0;
        while(a<=b){
            if(nums[a]==target) return a;
            else if(nums[b]==target) return b;
            else {
                mid=(a+b)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]<target){
                    ans=mid+1;
                    a=mid+1;
                }
                else{
                    b=mid-1;
                }
            }
        }
        return ans;
    }
};