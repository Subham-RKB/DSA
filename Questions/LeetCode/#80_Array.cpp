class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2) return nums.size();
        int j=2;
        for(int i=2;i<nums.size();i++){
            if(nums[j-2]!=nums[i]) nums[j++]=nums[i];
        }
        return j;
    }
};

// 1 1 1 2 2 3
//j=2
//i=2
// 1 1 2 2 3 3
