class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string> v;
        for(int i = 0;i<((int)s.length()-k+1);i++)
        {
            string kk = s.substr(i,k);
            v.insert(kk);
        }
        return pow(2,k)==v.size();
    }
};