class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int h=0;
        int maxi=nums[0];
        int maxx=nums[0];
        for(int i=1;i<nums.size();i++){
            maxx=max(maxx,nums[i]);
            if(nums[i]<maxi){
                h=i;
                maxi=maxx;
            }
        }
        return h+1;
    }
};