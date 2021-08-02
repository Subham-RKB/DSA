class Solution {
public:
    void helper(vector<string> &ans,string digits,string current,int index,vector<string>&hash)
    {
        if(index==digits.length()){
            ans.push_back(current);
            return;
        }
        string letters=hash[digits[index]-'0'];
        for(int i=0;i<letters.length();i++){
            helper(ans,digits,current+letters[i],index+1,hash);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> hash={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int n=digits.size();
        vector<string> ans;
        if(digits.length()==0){
            return ans;
        }
        helper(ans,digits,"",0,hash);
        return ans;
    }
    
};