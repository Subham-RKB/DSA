class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[0];
        for(int i=1;i<nums.size();i++){
            if(a==nums[i]){
                return true;
            }
            a=nums[i];
        }
        return false;
    }
};