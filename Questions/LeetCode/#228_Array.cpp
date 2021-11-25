class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            while(i!=nums.size()-1 && nums[i]+1==nums[i+1]){
                i++;
            }
            if(a==nums[i]){
                ans.push_back(to_string(a));
            }
            else{
                ans.push_back(to_string(a)+"->"+to_string(nums[i]));
            }
        }
        return ans;
    }
};