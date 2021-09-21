class Solution {
public:
    string intToRoman(int num) {
        string s="";
        vector<string> v(1001);
        v[1]='I';
        v[5]='V';
        v[10]='X';
        v[50]='L';
        v[100]='C';
        v[500]='D';
        v[1000]='M';
        int a=0;
        while(num>0){
            int r=num%10;
            if(r==4 || r==9){
                s=v[pow(10,a)]+v[(r*pow(10,a)+pow(10,a))]+s;
            }
            else{
               if(r<4){
                   for(int i=0;i<r;i++){
                       s=v[pow(10,a)]+s;
                   }
               }
                else{
                    r=r-5;
                    for(int i=0;i<r;i++){
                       s=v[pow(10,a)]+s;
                   }
                    s=v[5*pow(10,a)]+s;
                }
                
            }
            num=num/10;
            a++;
        }
        return s;
    }
};