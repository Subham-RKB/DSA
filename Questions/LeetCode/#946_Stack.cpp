class Solution {
public:
    bool validateStackSequences(vector<int>& pu, vector<int>& po) {
        int n = pu.size();
        int m = po.size();
        int i=0;
        int k =0;
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            if(s.empty() || s.top()!=po[k]) s.push(pu[i]);
            while(!s.empty() && k<m && s.top()==po[k])
            {
                k++;
                s.pop();
            }
        }
        return k==m;
    }
};
// 1 2 3 4 5
// 1 4 5 3 2 
// 1 2 3 4 5
// 4 3 5 1 2
// 1 2 3 4 5 6
// 1 2 4 3 5 6