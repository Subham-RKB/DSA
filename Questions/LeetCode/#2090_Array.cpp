class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> ans(nums.size(),0);
        vector<long long int> pre(nums.size(),0);
        vector<long long int> suff(nums.size(),0);
        int t=0;
        pre[0]=nums[0];
        suff[nums.size()-1]=nums[nums.size()-1];
        for(int i=1;i<nums.size();i++){
            if(i-k>0 && i+k<nums.size()){
                pre[i]+=pre[i-1]+nums[i]-nums[t++];
            }
            else{
                pre[i]+=pre[i-1]+nums[i];
            }
        }
        t=nums.size()-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(i-k>=0 && i+k<nums.size()-1){
                suff[i]+=suff[i+1]+nums[i]-nums[t--];
            }
            else{
                suff[i]+=suff[i+1]+nums[i];
            }
            
        }
        for(int i=0;i<nums.size();i++){
            if(i-k>=0 && i+k<nums.size()){
                ans[i]=(pre[i]+suff[i]-nums[i])/(k*2+1);
            }
            else ans[i]=(-1);
        }
        return ans;
    }
};