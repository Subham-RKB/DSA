class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int a=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==val) {nums[i]=101;a=a+1;}
        // }
        // sort(nums.begin(),nums.end());
        // return nums.size()-a;
        int n=nums.size();
        int start=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[start]=nums[i];
                start++;
            }
        }
        return start;
    }
};