class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        string k;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]-0==32){
                v.push_back(k);
                k="";
            }
            else{
                k.push_back(s[i]);
            }
        }
        v.push_back(k);
        unordered_map<char,string> m;
        unordered_map<string,char> m1;
        if(pattern.size()!=v.size()){
            return false;
        }
        for(int i=0;i<pattern.size();i++){
            if(m.find(pattern[i])==m.end()){
                m.insert({pattern[i],v[i]});
            }
            else{
                auto it=m.find(pattern[i]);
                if(it->second!=v[i]) return false;
            }
            if(m1.find(v[i])==m1.end()){
                m1.insert({v[i],pattern[i]});
            }
            else{
                auto it=m1.find(v[i]);
                if(it->second!=pattern[i]) return false;
            }
        }
        return true;
    }
};s