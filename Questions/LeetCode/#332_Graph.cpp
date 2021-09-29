class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        vector<string> answer;
        unordered_map<string,multiset<string>> m;
        int n=tickets.size();
        if(n==0) return answer;
        for(int i=0;i<n;i++){
            m[tickets[i][0]].insert(tickets[i][1]);
        }
        stack<string> q;
        q.push("JFK");
        while(!q.empty()){
            string k=q.top();
            //answer.push_back(k);
            if(m[k].empty()){
                answer.push_back(k);
                q.pop();
            }
            else{
                //sort(m[k].begin(),m[k].end());
                q.push(*(m[k].begin()));
                m[k].erase(m[k].begin());
            }
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};