class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        do{
            ans.push_back(nums);
            
        }
        while(next_permutation(nums.begin(),nums.end()));
        return ans;
    }
};

//Recursion Approach
class Solution {
public:
    vector<vector<int>> ans;
    void permutation(vectr<int> &nums,int i){
        if (i==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            permutation(nums,i+1);
            swap(nums[i],nums[j]);
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        permutation(nums,0);
        return ans;
    }
};