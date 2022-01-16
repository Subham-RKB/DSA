class Solution {
public:
    int maxDistToClosest(vector<int>& s) {
        int n=s.size();
        int a = 0;
        int d=-1;
        int ans= INT_MIN;
        int k=0;
        int first=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==1){
                d=i-a;
                k++;
                if(k==1){
                    first=i;
                }
                a=i;
                if(d>ans){
                    ans=d;
                }
            }
        }
        ans = (ans/2);
        int l = n-(a+1);
        //cout<<first<<" "<<l<<" "<<ans<<endl;
        return max(ans,(max(l,first))); 
    }
};