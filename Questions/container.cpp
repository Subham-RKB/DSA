class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxx=0;
        int l=0;
        int n=height.size();
        int r=n-1;
        while(l<r){
            int lowest=min(height[l],height[r]);
            int vol=(r-l)*lowest;
            maxx=max(maxx,vol);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxx;
        }
};