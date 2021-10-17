class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int tot=nums[0];
        int ans=0;
        for(int i=1;i<nums.size();i++){
            tot=tot|nums[i];
        }
        int n=nums.size();
        for(int i=0;i<(1<<n);i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    c|=nums[j];
                }
            }
            if(c==tot) ans++;
        }
        
        return ans;
    }
};