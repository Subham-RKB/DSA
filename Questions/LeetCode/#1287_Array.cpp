class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int a=1;
        int ele = arr[0];
        for(int i=1;i<arr.size();i++){
            if(ele==arr[i]){
                a++;
            }
            else{
                a=1;
                ele=arr[i];
            }
            if((1.0*0.25)*arr.size()<a){
                return arr[i];
            }
        }
        return ele;
    }
};