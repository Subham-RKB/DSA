class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v(nums.size()+1);
        vector<int> vv(nums.size()+1);
        vector<int> ans(nums.size());
        v[0]=1;
        vv[nums.size()-1]=1;
        for(int i=1;i<=nums.size()-1;i++){
            v[i]=v[i-1]*nums[i-1];
            //cout<<v[i]<<endl;
        }
        for(int i=nums.size()-2;i>=0;i--){
            vv[i]=vv[i+1]*nums[i+1];
            //cout<<vv[i]<<endl;
        }
        for(int i=0;i<nums.size();i++){
            ans[i]=v[i]*vv[i];
        }
        return ans;
    }
};