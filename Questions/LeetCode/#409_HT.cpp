class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> v(128);
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])==m.end()){
                m.insert({s[i],1});
            }
            else{
                m[s[i]]++;
            }
        }
        int even=0;
        int ans=0;
        for(auto i:m){
            int k=i.second;
            ans+=k/2*2;
            if(ans%2==0 && k%2==1) ans=ans+1;
            // if(k%2!=0){
            //     if(odd<k){
            //         odd=k;
            //     }
            // }
            // else{
            //     even=even+k;
            // }
        }
        return ans;
    }
};