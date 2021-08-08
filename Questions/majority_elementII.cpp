//BruteForce
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end()){
                m[nums[i]]++;
            }
            else{
                m.insert({nums[i],1});
            }
        }
        //int a=0;
        vector<int> v;
        for(auto s:m){
            if(s.second>(nums.size()/3)){
                v.push_back(s.first);
            }
        }
        return v;
    }
};