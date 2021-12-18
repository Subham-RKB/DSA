class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //return 0;
        int n=nums.size();
        vector<int> v(n);
        vector<int> vv(n);
        v[0]=nums[0];
        for(int i=1;i<n;i++){
            v[i]=v[i-1]+nums[i];
        }
        vv[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            vv[i]=vv[i+1]+nums[i];
        }
        for(int i=0;i<n;i++){
            if(v[i]==vv[i]){
                return i;
            }
        }
        //return -1;
        // int s=1;
        // int e=nums.size()-2;
        // int a=nums[0];
        // int b=nums[e+1];
        // int tot=accumulate(nums.begin(),nums.end(),0);
        // if(tot-nums[0]==0) return s-1;
        // if(tot-nums[e+1]==0) return e+1;
        // while(s<e){
        //     if(a>b){
        //         b=b+nums[e];
        //         e--;
        //     }
        //     else{
        //         a=a+nums[s];
        //         s++;
        //     }
        // }
        return -1;
    }
};