class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int a=INT_MIN;
        int b=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>a){
                a=nums[i];
            }
            if(nums[i]<b){
                b=nums[i];
            }
        }
        //cout<<a<<" "<<b<<endl;
        b=b+k;
        a=a-k;
        int mean=(a+b)/2;
        if(a<=mean && b>=mean){
            return 0;
        }
        return a-b;
    }
};