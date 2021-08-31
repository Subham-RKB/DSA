#include<bits/stdc++.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        int i=0,j=0,maxx=0;
        set<char> S;
        for(i=0;i<s.length();i++){
            char c= s[i];
            while(const bool is_in = S.find(c) != S.end()){
                S.erase(s[j]);
                ++j;
            }
            S.insert(c);
            maxx=max(maxx,i-j+1);
            
        }
        return maxx;
    }
};