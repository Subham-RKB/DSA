class Solution {
public:
    // int helper(vector<int> &nums,int k,int n,int &ans){
    //     if(n==0 || k==0){
    //         return 0;
    //     }
    //     if(k>nums[n-1]){
    //         helper(nums,k-nums[n-1],n-1,ans);
    //     }
    //     else if(k==nums[n-1]){
    //         ans=ans+1;
    //         helper(nums,k,n-1,ans);
    //     }
    //     else{
    //         helper(nums,k,n-1,ans);
    //     }
    //     return ans;
    // }
    int subarraySum(vector<int>& nums, int k) {
        // int n=nums.size();
        // int ans=0;
        // int sum=0,best=0;
        // for(int i=0;i<n;i++){
        //     sum=sum+nums[i];
        //     best=max(best,sum);
        //     if(sum==k )(best==k){
        //         ans=ans+1;
        //         i=i-1;
        //         sum=0;
        //     }
        // }
        // return ans;
        int n=nums.size();
        unordered_map<int,int> m;
        m[0]++;
        int sum=0;
        int ans=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(m.find(sum-k)!=m.end()){
                ans+=m[sum-k];
            }
            m[sum]++;
        }
        return ans;
    }
};

//[-1,2,3,1]->-1+2 (1,3)
//i=0
//sum=1
//best=1
// [1,1,-1,1,1,1]
// ans=0
// i=1
//     sum=2
//     best=1,2->2
//     ans=1
// i=1
//     sum=1;
//     ans=2;
// //[1,2,3]
// i=0
//     s=1
//     b=1
//     1
// i=1
