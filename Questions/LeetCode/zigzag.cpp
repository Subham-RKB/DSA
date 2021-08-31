class Solution {
public:
    string convert(string s, int numRows) {
        int row=numRows;
        if(row==1 || s.size()==1){
            return s;
        }
        vector<string> nums(row);
        bool d=false;
        int a=0;
        for(int i=0;i<s.size();i++){
            nums[a].push_back(s[i]);
            if(a==row-1){
                d=false;
            }
            else if(a==0){
                d=true;
            }
            if(d==true){
                a++;
            }
            else{
                a--;
            }
        }
        string finalstring="";
        for(auto i:nums){
            finalstring+=i;
        }
        return finalstring;
        
        
    }
};