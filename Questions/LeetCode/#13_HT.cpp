class Solution {
public:
    int romanToInt(string s) {
        if(s.length()==0){
            return 0;
        }
        map<char,int> m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int ans=0;
        ans=ans+m[s[s.length()-1]];
        for(int i=s.length()-2;i>=0;i--){
            if(m[s[i]]<m[s[i+1]]){
                ans=ans-m[s[i]];
            }
            else{
                ans=ans+m[s[i]];
            }
        }
        return ans;
    }
};