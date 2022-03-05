class Solution {
public:
    int helper(vector<int>& v,int i,vector<int>& m)
    {
        if(i>=v.size())
        {
            return 0;
        }
        if(m[i]!=-1) return m[i];
        int sum=v[i];
        int curr= v[i];
        int j=i+1;
        while(j<v.size() && v[j]==curr)
        {
            sum+=v[j];
            j++;
        }
        while(j<v.size() && v[j]==curr+1){
            j++;
        }
        m[i]= max(sum+helper(v,j,m),helper(v,i+1,m));
        return m[i];
    }
    int deleteAndEarn(vector<int>& nums) {
        vector<int> m(10001,-1);
        sort(nums.begin(),nums.end());
        return helper(nums,0,m);
    }
};