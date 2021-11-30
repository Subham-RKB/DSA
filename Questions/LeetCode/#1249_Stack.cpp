class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> S;
        for(int i=0;i<s.length();++i){
            if(s[i]=='('){
                S.push(i);
            }
            else if(s[i]==')'){
                if(S.empty()){
                    s[i]='#';
                }
                else{
                    S.pop();
                }
            }
            
            // if(a!='(' && a!=')'){
            //     ans=ans+a;
            // }
            // else if(a=='('){
            //     S.push(a);
            //     ans=ans+a;
            // }
            // else if(a==')'){
            //     if(!S.empty()){
            //         if(S.top()=='('){
            //             ans=ans+a;
            //             S.pop();
            //         }
            //     }
            // }
        }
        while(!S.empty()){
            s[S.top()]='#';
            S.pop();
        }
        string ans="";
        for(int i=0;i<s.length();++i){
            if(s[i]!='#'){
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};