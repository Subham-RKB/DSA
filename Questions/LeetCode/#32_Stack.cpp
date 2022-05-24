class Solution {
public:
    int longestValidParentheses(string s) {
        stack<pair<char,int>> S;
        vector<pair<int,int>> v;
        int ans = INT_MIN;
        if(s.length()<=1){
            return 0;
        }
        for(int i = 0;i<s.length();i++)
        {
            if(S.empty() && s[i]==')'){
                v.push_back(make_pair(i,0));
                ans = max(ans,0);
            }
            if(s[i]=='(')
            {
                if(v.size()==0){
                    S.push(make_pair(s[i],0));
                    v.push_back(make_pair(i,0));
                    ans= max(ans,0);
                }
                else if(i==v[v.size()-1].first+1 && s[i-1]==')'){
                    S.push(make_pair(s[i],v[v.size()-1].second));
                    v.push_back(make_pair(i,v[v.size()-1].second));
                    ans = max(ans,v[v.size()-1].second);
                }
                else{
                    S.push(make_pair(s[i],0));
                    v.push_back(make_pair(i,0));
                    ans = max(ans,0);
                }
            }
            else{
                if(!S.empty()){
                    if(S.top().first=='(' && s[i-1]!='('){
                        v.push_back(make_pair(i,S.top().second+2+v[i-1].second));
                        ans = max(ans,S.top().second+2+v[i-1].second);
                        S.pop();
                    }
                    else{
                        v.push_back(make_pair(i,S.top().second+2));
                        ans = max(ans,S.top().second+2);
                        S.pop();
                    }
                }       
            }
        }
        return ans;
    }
};