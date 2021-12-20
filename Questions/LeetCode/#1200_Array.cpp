class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int a=abs(arr[1]-arr[0]);
        ans.push_back({arr[0],arr[1]});
        for(int i=1;i<arr.size()-1;i++){
            if(a>abs(arr[i+1]-arr[i])){
                ans.clear();
                a=abs(arr[i+1]-arr[i]);
                ans.push_back({arr[i],arr[i+1]});
            }
            else if(a==abs(arr[i+1]-arr[i])){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        return ans;
    }
};