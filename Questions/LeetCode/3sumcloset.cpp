class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int max=100000;
        int answer;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            int start=i+1,end=n-1;
            while(start<end){
                int sum=nums[i]+nums[start]+nums[end];
                if(max>abs(sum-target)){
                    max=abs(sum-target);
                    answer=sum;
                }
                if(sum==target){
                    return sum;
                }
                else if(sum>target){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
        return answer;
    }
};