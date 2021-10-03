class Solution {
public:
    string helper(int k,int n, string ans){
        if(k==n) return ans;
        string temp="";
        for(int i=0;i<ans.length();i++){
            char a=ans[i];
            int aa=i;
            int c=1;
            while(a==ans[aa+1]){
                c++;
                i++;
                aa++;
            }
            temp+=to_string(c)+a;
        }
        ans=temp;
        return helper(k+1,n,ans);
    }
    string countAndSay(int n) {
        string ans="1";
        return helper(1,n,ans);
    }
};