class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int a=arr[0]-1;
        if(k<arr[0]){
            return k;
        }
        int ans=0;
        for(int i=1;i<arr.size();i++){
            a=a+(arr[i]-arr[i-1]-1);
             if(a>=k){
                ans=(arr[i]-(a-k+1));
                cout<<ans;
                break;
            }
            //cout<<a<<endl;
        }
        return ans==0?(arr[arr.size()-1]+(k-a)):ans;
    }
};