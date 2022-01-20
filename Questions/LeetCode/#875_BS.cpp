class Solution {
public:
     int getHours(vector<int>& piles, int m){
        int hours=0;
        for(int i=0; i<piles.size(); i++){
             hours+=ceil(1.0*piles[i]/m);
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& p, int h) {
        int n = p.size();
        int a=p[0];
        for(auto& b:p) a=max(a,b);
        if(h==n) return a;
        int l=1;
        int r=a;
        int ans=a;
        while(l<=r){
            int mid=l+(r-l)/2;
            int hours = getHours(p,mid);
            //cout<<hours<<endl;
            if(hours<=h){
                ans=min(ans,mid);
                r=mid-1;
            }
            else l=mid+1;          
        }
        return ans;
    }
};