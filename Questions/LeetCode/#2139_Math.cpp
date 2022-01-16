class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int t=target;
        int k=0;
        int u=0;
        while(t>1 && maxDoubles--){
            if(t%2!=0) k++;
            t/=2;
            u++;
        }
        int ok = t-1+u+k;
        return ok;
    }
};