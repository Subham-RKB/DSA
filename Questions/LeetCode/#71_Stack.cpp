class Solution {
public:
    string simplifyPath(string path) {
        stack<string> S;
        vector<string> v;
        string s="";
        for(int i= 0;i<path.size();i++)
        {
            if(path[i]=='/'){
                if(s.length()!=0) v.push_back(s);
                //cout<<s<<endl;
                s="";
            }
            else{
                s+=path[i];
            }
        }
        //cout<<s<<endl;
        if(s.length()!=0) v.push_back(s);
        for(int i=0;i<v.size();i++)
        {
            if(v[i][0]!='.' || v[i].length()>=3)
            {
                S.push(v[i]);
            }
            else if(v[i].length()==2)
            {
                if(v[i][0]=='.' && v[i][1]=='.' && !S.empty())
                {
                    S.pop();
                }
            }
            else if(v[i].length()==1)
            {
                if(v[i][0]=='.')
                {
                    continue;
                }
            }
        }
        string ans="";
        while(!S.empty())
        {
            string k = "/"+S.top();
            ans=k+ans;
            S.pop();
        }
        if(ans.length()==0) ans="/";
        return ans;
    }
    
};