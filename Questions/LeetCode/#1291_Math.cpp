class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int curr=0;
        vector<int> ans;
        for(int i=1;i<=9;i++){
            curr=0;
            for(int j=i;j<=9;j++){
                curr=curr*10+j;
                if(curr>high){
                    break;
                }
                if(curr>=low && curr<=high){
                    ans.push_back(curr);
                }
            }
        }
        sort(ans.begin(),ans.end());
        cout<<ans.size()<<endl;
        // vector<int> answer;
        // vector<int> ans={12,23,34,45,56,67,78,89,123,234,345,456,567,678,789,1234,2345,3456,4567,5678,6789,12345,23456,34567,45678,56789,123456,234567,345678,456789,1234567,2345678,3456789,12345678,23456789,123456789};
        // for(int i=0;i<ans.size();i++){
        //     if(ans[i]>=low){
        //         while(i<ans.size() && ans[i]<=high){
        //             answer.push_back(ans[i]);
        //             i++;
        //         }
        //         break;
        //     }
        // }
        // return answer;
        return ans;
    }
};