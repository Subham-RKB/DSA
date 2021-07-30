class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.length();
        unordered_set<string> set(wordDict.begin(),wordDict.end());
        vector<int> visited(s.size(),0);
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int start=q.front();
            q.pop();
            if(visited[start]) continue;
            for(int end=start+1;end<=s.size();end++){
                if(set.find(s.substr(start,end-start))!=set.end()){
q.push(end);
                if(end==s.size()) return true;}
            }
            visited[start]=true;
        }
        return false;
    }
};