class Solution {
public:
    int numberOfArrays(vector<int>& d, int l, int u) {
        int ans=u-l+1;
        int low=l;
        int upp=u;
        for(auto i:d){
            low=low+i;
            upp=upp+i;
            low=max(low,l);
            upp=min(upp,u);
            if(low>u or upp<l)
                return 0;
            ans=min(ans,upp-low+1);
        }
        return ans;
    }
};