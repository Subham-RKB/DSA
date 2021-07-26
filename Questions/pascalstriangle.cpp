class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=1;
        vector<vector<int>> answer;
        while(n<=numRows){
            vector<int> v(n,1);
            for(int i=1;i<n-1;i++){
                v[i]=answer[n-2][i-1]+answer[n-2][i];
            }
            answer.push_back(v);
            n=n+1;
        }
        return answer;
    }
};