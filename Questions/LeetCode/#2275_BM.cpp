class Solution {
public:
    int largestCombination(vector<int>& c) {
        int ans = 0;
        vector<int> v(32,0);
        for(int i = 0 ;i<c.size();i++)
        {
            int n = c[i];
            int index = 0;
            while(n){
                v[index]+=n&1;
                n=n>>1;
                index++;
            }
        }
        ans = *max_element(v.begin(),v.end());
        return ans;
    }
};
//0010
//0100
//0110
//1000
//0011
//0101