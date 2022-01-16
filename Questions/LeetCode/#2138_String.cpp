class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int i=0;
        int rem = s.length()%k;
        if(rem!=0){
        for(int i=0;i<k-rem;i++){
            s=s+fill;
        }
        }
        vector<string> ans;
        int a=0;
        while(a+k<=s.length()){
            ans.push_back(s.substr(a,k));
            a+=k;
    
        }
        return ans;
    }
};