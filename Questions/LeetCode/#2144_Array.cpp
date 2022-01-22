class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        if(n<=2){
            return accumulate(cost.begin(),cost.end(),0);
        }
        sort(cost.begin(),cost.end());
        int k=1;
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(k%3!=0){
                ans+=cost[i];
            }
            k++;
            cout<<ans<<endl;
        }
        return ans;
    }
};