class Solution {
public:
    bool helper(vector<int> &v,long long mid,long long k)
    {
        long long count= 0;
        for(int i=0;i<v.size();i++)
        {
            count+=(v[i]/mid);
            if(count>=k) return true;
        }
        return false;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int n = candies.size();
        int mx= 0;
        for(int i=0;i<n;i++)
        {
            mx= max(mx,candies[i]);
        }
        long long l=1,h=mx;
        long long ans=0;
        while(l<=h)
        {
            long long mid = l+(h-l)/2;
            if(helper(candies,mid,k)){
                ans=mid;
                l= mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
        // int sum = accumulate(candies.begin(),candies.end(),0);
        // if(sum<k) return 0;
        // if(sum==k) return 1;
        // int div = 0;
        // sort(candies.begin(),candies.end());
        // int i=0;
        // int ans = INT_MIN;
        // int ok = 0;
        // int l = 0;
        // for(i=0;i<candies.size();i++)
        // {
        //     div  = (sum/k);
        //     cout<<div<<endl;
        //     if(candies[i]>=div){
        //         l = candies[i]%(candies[i]/div);
        //         ok = (sum-l)/k;
        //         ans=max(ans,ok);
        //     }
        //     sum-=candies[i];
        //     // //cout<<"Ok"<<endl;
        //     // if(div>candies[i]){
        //     //     sum-=candies[i];
        //     // }
        //     // else{
        //     //     break;
        //     // }
        // }
        // // int l = candies[i]%(candies[i]/div);
        // // int ok = (sum-l)/k;
        // //cout<<sum<<" "<<candies[i]<<" "<<div<<" "<<i<<" "<<ok<<" "<<l<<endl;
        // return ok;
    }
};