class Solution {
public:
    int maxConsecutive(int b, int t, vector<int>& s) {
        sort(s.begin(),s.end());
        int k = s[0]-b;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]-s[i-1]-1>k){
                k=s[i]-s[i-1]-1;
            }
        }
        return max(k,t-s[s.size()-1]);
    }
};