class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char ans;
        int a=0;
        int b=0;
        for(int i=0;i<releaseTimes.size();i++){
            if(releaseTimes[i]-a>b){
                b=releaseTimes[i]-a;
                ans=keysPressed[i];
            }
            else if(releaseTimes[i]-a==b){
                ans=max(ans,keysPressed[i]);
            }
            a=releaseTimes[i];
        }
        return ans;
    }
};