class Solution {
public:
    int countElements(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        int lower= nums[0];
        int higher= nums[n-1];
        int ans=0;
        for(int i=1;i<n-1;i++){
            if(nums[i]>lower && nums[i]<higher){
                ans++;
            }
        }
        return ans;
    }
};