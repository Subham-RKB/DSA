class Solution {
public:
    int titleToNumber(string columnTitle) {
        int answer= 0;
        for (int i = 0; i < columnTitle.size();i++){
            answer = answer*26 + (columnTitle.at(i) - 'A' + 1);
        }
        return answer;
    }
};