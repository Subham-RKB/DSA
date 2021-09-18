class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int a=nums[0];
        int ans=1;
        for(int i=1;i<nums.size();i++){
            if(a!=nums[i]){
                a=nums[i];
                ans++;
            }
            else if(a==nums[i]){
                nums[i]=101;
            }
        }
        sort(nums.begin(),nums.end());
        return ans;
    }
};