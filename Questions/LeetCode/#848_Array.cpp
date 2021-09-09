class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=shifts.size();
        int a=0;
        for(int i=n-1;i>=0;i--){
            shifts[i]=(shifts[i]+a)%26;
            a=shifts[i];
        }
        for(int i=0;i<n;i++){
            int c=(int)s[i]+shifts[i];
            if(c>122){
                c=96+(c%122);
                s[i]=char(c);
            }
            else{
                s[i]=char(c);
            }
        }
        //cout<<(int)'a'<<" "<<(int)'z'<<endl;
        return s;
    }
};