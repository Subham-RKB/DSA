//BackTraking Solution
class Solution {
public:
    void backtrack(vector<string> &output,string s,int open,int close,int max){
        if(s.length()==max*2){
            output.push_back(s);
            return;
        }
        if(open<max) backtrack(output,s+"(",open+1,close,max);
        if(close<open) backtrack(output,s+")",open,close+1,max);
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> output;
        backtrack(output,"",0,0,n);
        return output;
    }
};