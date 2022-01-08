class Solution {
public:
    string capitalizeTitle(string title) {
        int a=1;
        vector<string> v;
        string k="";
        for(int i=0;i<title.length();i++){
            if(title[i]!=' '){
                k+=title[i];
            }
            else{
                v.push_back(k);
                k="";
            }
        }
        v.push_back(k);
        string ans="";
        for(int i=0;i<v.size();i++){
            if(v[i].length()>2){
            ans+=toupper(v[i][0]);
            for(int j=1;j<v[i].length();j++){
                ans+=tolower(v[i][j]);
            }
                ans+=" ";
            }
            else{
                for(int k=0;k<v[i].length();k++){
                    ans+=tolower(v[i][k]);
                }
                ans+=" ";
            }
            
        }
        
        return ans.substr(0,ans.length()-1);
    }
};