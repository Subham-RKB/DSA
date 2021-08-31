class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> m;
        for(auto i:deck){
            m[i]++;
        }
        int ans=m[deck[0]];
        for(auto s:m){
            ans= __gcd(ans,s.second);
        }
        return (ans<2?false:true);
    }
};