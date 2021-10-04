class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        int sum=accumulate(rolls.begin(),rolls.end(),0);
        int t=(mean*(n+m))-sum;
        if(t<n || t>(6*n)) return {};
        int mod=t%n;
        vector<int> v(n,t/n);
        for(int i=0;i<mod;i++){
            v[i]=v[i]+1;
        }
        return v;
    }
};