class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> m;
        for(int i=0;i<nums1.size();i++){
            m.insert(nums1[i]);
        }
        vector<int> answer;
        for(int i=0;i<nums2.size();i++){
            if(m.find(nums2[i])!=m.end()){
                answer.push_back(nums2[i]);
                m.erase(nums2[i]);
            }
        }
        return answer;
        
        
    }
};
//4 4 8 9 9
//4 5 9
