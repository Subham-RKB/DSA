class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0;
        int reach=0;
        int maxreach=0;
        for(int i=0;i<nums.size()-1;i++){
            if(i+nums[i]>maxreach){
                maxreach=i+nums[i];
            }
            if(i==reach){
                jumps++;
                reach=maxreach;
            }
        }
        return jumps;
    }
};