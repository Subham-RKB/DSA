class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
        string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        while(columnNumber){
            columnNumber-=1;
            int a=columnNumber%26;
            s=alpha[a]+s;
            columnNumber=columnNumber/26;
        }
        //s=alpha[columnNumber]+s;
        return s;
    }
};