class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> m;
        set<char> s={'b','a','l','o','n'};
        int y=0;
        for(char aa:text){
            if(s.find(aa)!=s.end())
            {
                m[aa]++;
                y++;
            }
        }
        int h=INT_MAX;
        if(y<5) return 0;
        for(auto a:m){
            if(a.first=='l' or a.first=='o'){
                if(a.second<2) return 0;
                else{
                    if(a.second/2<h){
                        h=(a.second/2);
                    }
                }
            }
            else{
                if(a.second<h){
                    h=a.second;
                }
            }
        }
        return h;
    }
};