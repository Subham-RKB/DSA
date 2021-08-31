class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int mini=*min_element(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int a=0;
        for(int i=n-1;i>0;i--){
            int l=0,r=i-1;
            while(l<r){
                if(nums[l]+nums[r]>nums[i]){
                    a+=r-l;
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return a;
    }
};