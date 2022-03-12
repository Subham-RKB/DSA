class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++)
        {
            x^=nums[i];
        }
        int bit;
        for(int i=0;i<32;i++)
        {
            if(x& (1<<i))
            {
                bit=i;
                break;
            }
        }
        int first=0;
        for(int a:nums)
        {
            if(a& (1<<bit))
            {
                first^=a;
            }
        }
        int second = first^x;
        return {first,second};
        // int tot=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     tot^=nums[i];
        // }
        // int k =tot;
        // for(int i=0;i<nums.size();i++)
        // {
        //     tot^=nums[i];
        //     if(tot==0)
        //     {
        //         return {nums[i],nums[i]^k};
        //     }
        // }
        // return {};
    }
};