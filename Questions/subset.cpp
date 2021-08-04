class Solution {
public:
    vector<vector<int>> answer;
    void generate(vector<int> &nums,vector<int> &sets,int k){
        if(k==nums.size()) {answer.push_back(sets);return;}
        generate(nums,sets,k+1);
        sets.push_back(nums[k]);
        generate(nums,sets,k+1);
        sets.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> sets;
        generate(nums,sets,0);
        return answer;
    }
};