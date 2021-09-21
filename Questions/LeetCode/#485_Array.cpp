class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxa=0;
        int a=0;
        for(int aa:nums){
            if(aa==1){
                a++;
            }
            else{
                a=0;
            }
            maxa=max(maxa,a);
        }
        return maxa;
    }
};