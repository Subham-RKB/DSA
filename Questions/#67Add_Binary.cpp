class Solution {
public:
    string addBinary(string a, string b) {
        int a1=a.length();
        int b1=b.length();
        int diff=abs(a1-b1);
        if(a1>b1){
            for(int i=0;i<diff;i++){
                b='0'+b;
            }
        }
        else if(a1<b1){
            for(int i=0;i<diff;i++){
                a='0'+a;
            }
        }
        string result="";
        char c='0';
        int a2=a.length();
        for(int i=a2-1;i>=0;i--){
            if(a[i]=='0' && b[i]=='0'){
                if(c=='1'){
                    result='1'+result;
                    c='0';
                }
                else{
                    result='0'+result;
                }
            }
            else if(a[i]=='1' && b[i]=='0'){
                if(c=='1'){
                    result='0'+result;
                    c='1';
                }
                else{
                    result='1'+result;
                }
            }
            else if(a[i]=='0' && b[i]=='1'){
                if(c=='1'){
                    result='0'+result;
                    c='1';
                }
                else{
                    result='1'+result;
                }
            }
            else{
                if(c=='1'){
                    result='1'+result;
                    c='1';
                }
                else{
                    result='0'+result;
                    c='1';
                }
            }
        }
        if(c=='1') result='1'+result;
        return result;
    }
};