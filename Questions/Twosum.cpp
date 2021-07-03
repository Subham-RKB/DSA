//Easy
class Solution {
public:
    int check(vector<int>& nums,int target,int c){
        for(int i=c+1;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int a,b;
        for(int i=0;i<nums.size();i++){
            a=target-nums[i];
            b=check(nums,a,i);
            if(b!=-1){
                v.push_back(i);
                v.push_back(b);
                break;
            }
        }
        return v;
    }
};