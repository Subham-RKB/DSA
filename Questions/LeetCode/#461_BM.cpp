class Solution {
public:
    int hammingDistance(int x, int y) {
        int a=x^y;
        int answer=0;
        while(a){
            if(a&1) answer++;
            a=a>>1;
        }
        return answer;
    }
};