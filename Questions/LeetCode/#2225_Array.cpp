class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> m;
        for(auto i:matches)
        {
            m[i[1]]++;
            m[i[0]]+=0;
        }
        vector<int> zero;
        vector<int> one;
        for(auto i:m)
        {
            //cout<<i.first<<" "<<i.second<<endl;
            if(i.second==0)
            {
                zero.push_back(i.first);
            }
            else if(i.second==1)
            {
                one.push_back(i.first);
            }
        }
        vector<vector<int>> answer;
        answer.push_back(zero);
        answer.push_back(one);
        return answer;
    }
};