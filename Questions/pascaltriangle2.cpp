class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=1;
        vector<vector<int>> answer;
        while(n<=rowIndex+1){
            vector<int> v(n,1);
            for(int i=1;i<n-1;i++){
                v[i]=answer[n-2][i-1]+answer[n-2][i];
            }
            answer.push_back(v);
            n=n+1;
        }
        return answer[rowIndex];
    }
};