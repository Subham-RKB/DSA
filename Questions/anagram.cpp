class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> words;
        string w;
        for(int i=0;i<strs.size();i++){
            w=strs[i];
            sort(w.begin(),w.end());
            words[w].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto s:words)
            result.push_back(s.second);
        return result;
    }
};

//[4,0,19] [aet] [aet] []