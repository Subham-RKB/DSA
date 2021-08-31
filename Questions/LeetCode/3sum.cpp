class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> v;
        if(n<3){
            return v;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                break;
            }
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int start=i+1,end=n-1;
            while(start<end){
                int sum=nums[i]+nums[start]+nums[end];
                if(sum==0){
                    v.push_back({nums[i],nums[start],nums[end]});
                    int value=nums[start];
                    while(start<n && value==nums[start]){
                        start++;
                    }
                    value=nums[end];
                    while(end>=0 && value==nums[end]){
                        end--;
                    }
                        
                }
                else if(sum>0){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
        return v;
    }
};