class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(),items.end());
        vector<int> answer;
        int mx = items[0][1];
        for(int i = 0;i<items.size();i++)
        {
            
            items[i][1] = max(items[i][1],mx);
            mx = items[i][1];
        }
        for(int i=0;i<queries.size();i++)
        {
            int l = 0;
            int h = items.size()-1;
            int count = 0;
            while(l<=h)
            {
                int m =(h+l)/2;
                if(items[m][0]<=queries[i]){
                    // for(int j = 0;j<=m;j++){
                    //     ans = max(items[j][1],ans);
                    // }
                    count = m + 1;
                    l=m+1;
                }
                else{
                    h = m-1;
                }
            }
            if(count==0) answer.push_back(0);
            else answer.push_back(items[count-1][1]);
        }
        return answer;
        //sort(items.begin(),items.end());
        //int maxi = items[0][1];
        // for(auto xt : items)
        // {
        //    cout<<xt[0]<<" "<<xt[1]<<endl;
        // }
        // for(auto &xt : items)
        // {
        //     maxi = max(maxi , xt[1]);
        //     xt[1] = maxi;
        // }
        // for(auto xt : items)
        // {
        //    cout<<xt[0]<<" "<<xt[1]<<endl;
        // }
//         vector<int>ans;
//         int n = items.size();
        
//         for(int key : queries){
//             int left = 0;
//             int right = n - 1;

//             int count = 0;

//             while (left <= right) {
//                 int mid = (right + left) / 2;
//                 if (items[mid][0] <= key) {
//                     count = mid + 1;
//                     left = mid + 1;
//                 }
//                 else
//                     right = mid - 1;
//             }
            
//             if(count==0)
//                 ans.push_back(0);
//             else
//                 ans.push_back(items[count-1][1]);
//         }
        //return ans;
    }
};