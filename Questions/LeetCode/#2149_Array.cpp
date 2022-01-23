class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> answer(nums.size(),0);
        int pos=0;
        int neg=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                answer[pos]=nums[i];
                pos+=2;
            }
            else if(nums[i]<0){
                answer[neg]=nums[i];
                neg+=2;
            }
        }
        return answer;
    }
};