class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> q;
        for(int i=0;i<score.size();i++){
            q.push({score[i],i});
        }
        int a=0;
        vector<string> v(score.size());
        while(!q.empty()){
            v[q.top().second]=a==0?"Gold Medal":a==1?"Silver Medal":a==2?"Bronze Medal":to_string(a+1);
            a++;
            q.pop();
        }
        return v;
    }
};