class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // unordered_map<int,int> m;
        // vector<int> v;
        // for(int i=0;i<nums.size();i++){
        //     m[nums[i]]++;
        //     if(m[nums[i]]>1){
        //         v.push_back(nums[i]);
        //     }
        // }
        // return v;
        if(nums.size()==0) return nums;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]<0) ans.push_back(abs(nums[i]));
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
        return ans;
    }
};