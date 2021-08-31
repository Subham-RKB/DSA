class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string ss="";
        for(int i=0;i<s.length()+1;i++){
            if(s[i]!=' ' && i<s.length()){
                ss=ss+s[i];
            }
            else{
                v.push_back(ss);
                ss="";
            }
        }
        string sss="";
        for(int i=0;i<v.size();i++){
            reverse(v[i].begin(),v[i].end());
        }
        for(int i=0;i<v.size()-1;i++){
            sss=sss+v[i]+" ";
        }
        sss=sss+v[v.size()-1];
        return sss;
    }
    
};