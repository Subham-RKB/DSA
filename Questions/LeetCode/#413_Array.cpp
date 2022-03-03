class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return 0;
        //return 10;
        int difference = INT_MIN;
        int count =0;
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]-nums[i]!=difference)
            {
                count++;
                int kk = count*(count-2);
                int c= count;
                int k = (c*(c-1))/2;
                if(c!=0) ans+=(kk-k+1);
                difference=nums[i+1]-nums[i];
                count=1;
                cout<<ans<<endl;
            }
            else{
                count++;
            }
        }
        count++;
        int kk = count*(count-2);
        int c= count;
        int k = (c*(c-1))/2;
        ans+=(kk-k+1);
        return ans;
    }
};