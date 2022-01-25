class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        int down=0;
        int mx=arr[0];
        int h=0;
        for(int i=1;i<n;i++){
            if(mx<arr[i]){
                mx=arr[i];
                h=i;
            }
            else if(mx==arr[i]){
                return false;
            }
            else{
                break;
            }
        }
        if(mx==arr[0]) return false;
        if(h==n-1) return false;
         mx=arr[h];
        for(int i=h+1;i<n;i++){
            if(mx>arr[i]){
                mx=arr[i];
                //h=i;
            }
            else if(mx==arr[i]){
                return false;
            }
            else{
                return false;
            }
        }
        return true;
    }
};