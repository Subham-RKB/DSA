class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int m;
        int e=nums.size()-1;
        while(s<=e){
            m = (s+e)/2;
            cout<<m<<endl;
            if(nums[m]==target){
                return m;
            }
            else if(nums[m]>=nums[s]){
                if(target<=nums[m] && target>=nums[s]) e=m-1;
                else s=m+1;
            }
            else{
                if(target>=nums[m] && target<=nums[e]) s=m+1;
                else e=m-1;
            }
        }
        return -1;
    }
};