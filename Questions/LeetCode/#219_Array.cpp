class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])==m.end()){
                m[nums[i]]=i;
            }
            else{
                if(abs(m[nums[i]]-i)<=k){
                    return true;
                }
                else{
                    m[nums[i]]=i;
                }
            }
        }
         return false;
        // int n=100001;
        // vector<int> v(n,0);
        // for(int i=1;i<=nums.size();i++){
        //     if(v[nums[i-1]]==0){
        //         v[nums[i-1]]=i;
        //     }
        //     else{
        //         if(k>=(abs(v[nums[i-1]]-i))){
        //             return true;
        //         }
        //         else{
        //             v[nums[i-1]]=i;
        //         }
        //     }
        // }
        // return false;
    }
};