 bool isIsomorphic(string s, string t) {
        vector<char> h(s.length()+1,'0');
        for(int i=0;i<s.length();i++){
            int a=(int)t[i]%97;
            if(h[a]=='0')
                h[a]=s[i];
            else{
                if(h[a]!=s[i]){
                    return false;
                }
            }
        }
        return true;
    }

    class Solution {
public:
    bool isIsomorphic(string s,string t){
    unordered_map<char,char> s1;
    unordered_map<char,int> t1;   
    for(int i=0;i<s.size();i++)
    {
        
        if(s1[s[i]]!=0)
        {
            if(s1[s[i]]!=t[i])
                return false;
        }
        else if(s1[s[i]]==0 && t1[t[i]]>0)            
            return false;
        else 
          s1[s[i]]=t[i];
        
        t1[t[i]]++;             
    }
    return true;
}
};