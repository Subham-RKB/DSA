class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int a=0;
        int b=0;
        for(int i:arr1){
            a^=i;
        }
        for(int j:arr2){
            b^=j;
        }
        return a&b;
    }
};