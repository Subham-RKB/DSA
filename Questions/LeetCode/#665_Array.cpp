class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int k=-1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                if(k!=-1){
                    return false;
                }
                k=i;
            }
        }
    return k == -1 || k == 0 || k == nums.size()-2 || nums[k+1]>=nums[k-1] || nums[k] <= nums[k+2];
    }
};