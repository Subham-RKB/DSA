class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]<0){
                //cout<<"ok"<<endl;
                return abs(nums[i]);
            }
            else nums[abs(nums[i])-1]*=(-1);
        }
        return abs(nums[0]);
    }
};


// 1 1 2 3 4 = 11
// 1 2 2 3 4 = 12
// 1 2 3 3 4 = 13
// 1 2 3 4 4 = 14

