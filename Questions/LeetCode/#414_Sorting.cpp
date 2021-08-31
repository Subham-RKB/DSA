class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[nums.size()-1];
        int b=1;
        for(int i=nums.size()-2;i>=0;i--){
            if(a!=nums[i]){
                b=b+1;
                a=nums[i];
            }
            if(b==3){
                return nums[i];
            }
        }
        return nums[nums.size()-1];
    }
};