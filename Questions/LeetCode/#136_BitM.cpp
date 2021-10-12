class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++){
        //     nums[abs(nums[i])-1]=nums[abs(nums[i])-1]*(-1);
        //     //cout<<nums[abs(nums[i])]<<endl;
        // }
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]<0) return i+1;
        // }
        // return 0;
        for(int i=1;i<nums.size();i++){
            nums[0]=nums[0]^nums[i];
        }
        return nums[0];
    }
};