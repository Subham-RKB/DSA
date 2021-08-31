class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int size=nums.size();
        int subsetNum=(1<<size);
        set<vector<int>> ans;
        for(int i=0;i<subsetNum;++i){
            vector<int> sub;
            for(int j=0;j<size;j++){
                if(i&(1<<j))
                    sub.push_back(nums[j]);
            }
            sort(sub.begin(),sub.end());
            if(ans.find(sub)==ans.end()){
                ans.insert(sub);
            }
        }
        vector<vector<int>> answer;
        answer.assign(ans.begin(),ans.end());
        return answer;
    }
};