class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=1;
        }
        int maxx=0;
        for(int i=0;i<nums.size();i++){
            if(!m[nums[i]-1]){
                int cnum=nums[i]+1;
                int cmax=1;
                while(m[cnum]){
                    cnum++;
                    cmax++;
                }
                if(cmax>maxx) maxx=cmax;
            }
        }
        return maxx;
    }
};