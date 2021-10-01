class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int a=arr[arr.size()-1];
        for(int i=arr.size()-1;i>=0;i--){
            int b=arr[i];
            arr[i]=a;
            if(b>a){
                a=b;
            }
        }
        arr[arr.size()-1]=-1;
        return arr;
    }
};