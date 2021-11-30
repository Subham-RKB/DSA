class Solution {
public:
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) {
        int ans=0;
        int i=startPos[0];
        int j=startPos[1];
        int ii=homePos[0];
        int jj=homePos[1];
        while(i!=ii){
            i+=(ii-i)/abs(ii-i);
            ans+=rowCosts[i];
        }
        while(j!=jj){
            j+=(jj-j)/abs(jj-j);
            ans+=colCosts[j];
        }
        return ans;   
    }
};