bool comp(vector<int>& a ,vector<int>& b)
{
    return (a[1]>b[1]);
}
bool comps(vector<int>& a ,vector<int>& b)
{
    return (a[0]>b[0]);
}
class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int ans=0;
        sort(costs.begin(), costs.end(), [](const vector<int>&a, const vector<int>&b){
            return (a[0] - a[1]) < (b[0] - b[1]);
        });
        int n =costs.size();
        // sort(costs.begin(),costs.end(),comps);
        for(int i=0;i<n;i++) cout<<costs[i][0]<<" "<<costs[i][1]<<endl;
        // for(int i=0;i<costs.size();i++)
        // {
        //     if(costs[i][0]<costs[i][1]){
        //         a++;
        //     }
        //     else{
        //         b++;
        //     }
        // }
        // cout<<a<<" "<<b<<endl;
        // int ans=0;
        // if(a>b)
        // {
        //     sort(costs.begin(),costs.end(),comps);
        //     for(int i=0;i<n;i++) cout<<costs[i][0]<<" "<<costs[i][1]<<endl;
            for(int i=0;i<costs.size()/2;i++)
            {
                ans+=costs[i][0];
                //cout<<costs[i][0]<<endl;
            }
            for(int i=n/2;i<n;i++)
            {
                ans+=costs[i][1];
            }
//         }
//         else{
//             sort(costs.begin(),costs.end());
//             for(int i=0;i<n;i++) cout<<costs[i][0]<<" "<<costs[i][1]<<endl;
//             for(int i=0;i<n/2;i++)
//             {
//                 ans+=costs[i][0];
//                 //cout<<ans<<endl;
//             }
//             for(int i=n/2;i<n;i++)
//             {
//                 ans+=costs[i][1];
//                 //cout<<ans<<endl;
//             }
            
//         }
        return ans;
    }
};