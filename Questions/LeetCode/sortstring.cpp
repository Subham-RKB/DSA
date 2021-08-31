class Solution {
public:
    string customSortString(string order, string str) {
        string ans="";
        for(int i=0;i<order.length();i++){
            for(int j=0;j<str.length();j++){
                if(order[i]==str[j]){
                    ans+=str[j];
                }
            }
        }
        for(int i=0;i<str.length();i++){
            if(order.find(str[i])>str.length()){
                ans=ans+str[i];
            }
        }
        return ans;
    }
};
