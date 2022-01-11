class Solution {
public:
    void reverse(vector<int> &v,int s,int e){
        while(s<e){
            swap(v[s++],v[e--]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k - (k/nums.size())*nums.size();
        int n=nums.size()-1;
        reverse(nums,0,n-k);
        reverse(nums,n-k+1,n);
        reverse(nums,0,n);
        
        // vector<int> v(nums.size());
        // k=(k%(nums.size()));
        // for(int i=0;i<nums.size();i++){
        //     v[(i+k)%(nums.size())]=nums[i];
        // }
        //  nums=v;
    }
};