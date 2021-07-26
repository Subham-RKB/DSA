class Solution {
public:
    unordered_map<string,bool> memo;
    bool check(string s1,string s2,string s3,int len1,int len2,int len3,int p1,int p2,int p3)
    {
        if(p3==len3)
            return (p1==len1 && p2==len2)?true:false;
        string key=to_string(p1)+"%"+to_string(p2)+"%"+to_string(p3);
        if(memo.find(key)!=memo.end()){
            return memo[key];
        }
        if(p1==len1){
            return memo[key]=s2[p2]==s3[p3]?check(s1,s2,s3,len1,len2,len3,p1,p2+1,p3+1):false;
        }
        if(p2==len2){
            return memo[key]=s1[p1]==s3[p3]?check(s1,s2,s3,len1,len2,len3,p1+1,p2,p3+1):false;
        }
        bool a=false,b=false;
        if(s1[p1]==s3[p3]){
            a=check(s1,s2,s3,len1,len2,len3,p1+1,p2,p3+1);
        }
        if(s2[p2]==s3[p3]){
            b=check(s1,s2,s3,len1,len2,len3,p1,p2+1,p3+1);
        }
        return memo[key]=(a||b);
    }
    bool isInterleave(string s1, string s2, string s3) {
        int len1=s1.length();
        int len2=s2.length();
        int len3=s3.length();
        return check(s1,s2,s3,len1,len2,len3,0,0,0);
    }
};