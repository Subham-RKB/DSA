class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return ;
        int i=1;
        int index=-1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1])
                index=i;
        }
        if(index==-1){
            sort(nums.begin(),nums.end());
            return;
        }
        int a=index;
        for(int i=index;i<n;i++){
            if(nums[i]>nums[index-1] && nums[i]<nums[index]){
                a=i;
            }
        }
        swap(nums[index-1],nums[a]);
        sort(nums.begin()+index,nums.end());
        
    }
};