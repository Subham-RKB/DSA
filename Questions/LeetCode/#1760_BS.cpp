class Solution {
public:
    bool helper(int m,vector<int> &nums,int k)
    {
        for(int i=0;i<nums.size();i++)
        {
            k-=(nums[i]/m);
            if(nums[i]%m==0){
                k++;
            }
        }
        return k>=0;
    }
    int minimumSize(vector<int>& nums, int k) {
        int l = 1;
        int ans = 0;
        int h = *max_element(nums.begin(),nums.end());
        while(l<=h)
        {
            int m = l+(h-l)/2;
            if(helper(m,nums,k)){
                ans = m;
                h = m-1;
            }
            else{
                l = m+1;
            }
        }
        return ans;
        // priority_queue<int> pq;
        // int k1 = k; 
        // int mn = INT_MAX;
        // for(int i=0;i<nums.size();i++)
        // {
        //     pq.push(nums[i]);
        //     mn = min(mn,nums[i]);
        // }
        // while(!pq.empty() && k--)
        // {
        //     int t =pq.top();
        //     pq.pop();
        //     int a,b,aa,bb;
        //     aa = (t/(k1+1));
        //     bb = (t-(t/(k1+1)));
        //     a = min(mn,aa);
        //     b = min(t-mn,bb);
        //     //mn = min(mn,min(a,b));
        //     cout<<t<<" "<<a<<" "<<b<<" "<<mn<<endl;
        //     pq.push(a);
        //     pq.push(b);
        //     k1--;
        // }
        // int ans = INT_MIN;
        // while(!pq.empty())
        // {
        //     ans = max(ans,pq.top());
        //     pq.pop();
        // }
        // return ans;
    }
};