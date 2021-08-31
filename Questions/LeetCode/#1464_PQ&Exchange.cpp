class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // priority_queue<int> q;
        // for(int a:nums){
        //     q.push(a);
        // }
        // int aa=q.top();
        // q.pop();
        // return (aa-1)*(q.top()-1);
        int a=0;
        int b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>a){
                b=exchange(a,nums[i]);
            }
            else{
                b=max(b,nums[i]);
            }
        }
        return (a-1)*(b-1);
    }
};