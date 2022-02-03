class Solution {
public:
    int countPairs(vector<int>& d) {
        unordered_map<int,int> m;
        long long int ans=0;
        for(int i=0;i<d.size();i++){
            for(int j=0;j<=22;j++){
                int k = pow(2,j)-d[i];
                if(m.count(k)) ans+=m[k];
            }
            m[d[i]]++;
        }
        return ans%(int)(1e9+7);
    }
};