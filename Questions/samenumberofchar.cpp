class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> M;
        for(int i=0;i<s.length();i++){
            if(M.find(s[i])==M.end()){
                M.insert(make_pair(s[i],1));
            }
            else{
                M[s[i]]++;
            }
        }
        int a=M.begin()->second;
        for(auto s:M){
            if(s.second!=a){
                return false;
            }
        }
        return true;
        
        
    }
};