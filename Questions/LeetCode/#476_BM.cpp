using ll=long long;
class Solution {
public:
    int findComplement(int n) {
        ll bits = floor(log2(n))+1;
        ll ok= ((ll)(1 << bits)-1);
        return ok ^ n;
    }
};