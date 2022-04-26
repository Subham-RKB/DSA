class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;
        map<int,int> mp;
        int n = nums.size();
        int m = nums[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                //cout<<nums[i][j]<<endl;
                mp[nums[i][j]]+=1;
            }
        }
        for(auto& i:mp)
        {
            //cout<<i.second<<endl;
            if(i.second==n)
            {
                ans.push_back(i.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};