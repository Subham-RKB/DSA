class Solution {
public:
    // vector<vector<int>> ans;
    // void helper(vector<int> &nums,int k){
    //     if(k==nums.size()){
    //         ans.push_back(nums);
    //         return;
    //     }
    //     unordered_set<int> m;
    //     for(int i=k;i<nums.size();i++){
    //         if(m.find(nums[i])!=m.end()){
    //             continue;
    //         }
    //         else{
    //             m.insert(nums[i]);
    //         }
    //         swap(nums[k],nums[i]);
    //         helper(nums,k+1);
    //         swap(nums[k],nums[i]);
    //     }
    // }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        do{
            if(s.find(nums)==s.end()){
                s.insert(nums);
            }
        }while(next_permutation(nums.begin(),nums.end()));
        vector<vector<int>> v;
        v.assign(s.begin(),s.end());
        return v;
        // helper(nums,0);
        // return ans;
        
    }
};