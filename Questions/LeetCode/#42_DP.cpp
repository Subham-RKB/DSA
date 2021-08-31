class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        int n=height.size();
        if(n<=2) return 0;
        int maxl=height[0];
        int maxr=height[n-1];
        int l=1;
        int r=n-2;
        while(l<=r){
            if(maxl<=maxr){
                if(height[l]>=maxl){
                    maxl=height[l];
                }
                else{
                    ans=ans+maxl-height[l];
                }
                l=l+1;
            }
            else{
                if(height[r]>maxr){
                    maxr=height[r];
                }
                else{
                    ans=ans+maxr-height[r];
                }
                r=r-1;
            }
        }
        return ans;
    }
};
//
//2,0,1,2  (2-0)+(2-1)+(2-2)=3
//0,1,0,2  (1-0)=1
//2,1,0,1,3 (2-1)+(2-0)+(2-1)=4
