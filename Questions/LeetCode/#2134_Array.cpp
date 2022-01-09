class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int one=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                one++;
            }
            nums.push_back(nums[i]);
        }
        //cout<<one<<endl;
        int zero=0;
        for(int i=0;i<one;i++){
            if(nums[i]==0) zero++;
        }
        int ans=zero;
        //cout<<ans<<endl;
        int c=0;
        for(int i=1;i<n;i++){
            if(nums[i+one-1]==0){
                zero++;
            }
            if(nums[c]==0){
                zero--;
            }
            if(zero<ans){
                ans=zero;
            }
            c++;
            //cout<<zero<<endl;
        }
        return ans;
    }
};