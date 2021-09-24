class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        //vector<pair<char,int>> v(s.length()+1);
        priority_queue<pair<int,char>> v;
        for(auto a:m){
            v.push(make_pair(a.second,a.first));
        }
        string ans="";
        // for(int i=v.size()-1;i>=0;i--){
        //     for(int j=0;j<v[i].second;j++){
        //         ans=v[i].first+ans;
        //     }
        // }
        while(!v.empty()){
            for(int i=0;i<v.top().first;i++){
                ans+=v.top().second;
            }
            v.pop();
        }
        return ans;
    }
};