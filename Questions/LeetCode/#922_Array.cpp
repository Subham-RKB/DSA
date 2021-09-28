class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> answer(nums.size());
        int a=0;
        int b=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                answer[a]=nums[i];
                a=a+2;
            }
            else{
                answer[b]=nums[i];
                b=b+2;
            }
        }
        return answer;
    }
};