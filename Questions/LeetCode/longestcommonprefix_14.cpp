class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min=1000;
        int ind=0;
        for(int i=0;i<strs.size();i++){
            if(min>strs[i].length()){
                min=strs[i].size();
                ind=i;
            }
        }
        string s="";
        int a=0;
        int c=0;
        while(a!=min){
            c=0;
            for(int i=0;i<strs.size();i++){
                if(strs[i][a]!=strs[ind][a]){
                    return s;
                }
                else{
                    c=c+1;
                }
            }
            if(c==strs.size()) s=s+strs[ind][a];
            a++;
        }
        return s;
    }
};