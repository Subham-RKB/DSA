class Solution {
public:
    // bool helper(vector<int>& nums,int m,int t)
    // {
    //     int tot = 0;
    //     for(int i=0;i<nums.size();i++)
    //     {
    //         tot+=(ceil((nums[i]*1.0)/m));
    //         if(tot>=t){
    //             //cout<<tot<<endl;
    //             return true;
    //         }
    //     }
    //     //cout<<tot<<endl;
    //     return false;
    // }
    int smallestDivisor(vector<int>& nums, int k) {
        int n  = nums.size();
        int l = 1;
        int h = 1e6;
        while(l<h)
        {
            int m = (l+h)/2;
            //cout<<l<<" "<<h<<" "<<m<<endl;
            int tot = 0;
            for(int i=0;i<n;i++)
            {
                tot+=(nums[i]+m-1)/m;
            }
            if(tot<=k){
                //cout<<m<<endl;
                h = m;
            }
            else{
                l = m+1;
            }
        }
        return l;
    }
};