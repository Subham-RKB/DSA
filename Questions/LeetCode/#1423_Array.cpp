class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        int sum = accumulate(cp.begin(),cp.end(),0);
        //cout<<sum<<endl;
        int i =0;
        int point=0;
        int l = 0;
        int ans = 0;
        int n = cp.size();
        int y = n-k;
        while(i<n){
            //cout<<point<<endl;
            if(l<y){
                point+=cp[i];
                l++;
            }
            else{
                //cout<<"i "<<i<<endl;
                //cout<<point<<endl;
                ans = max(ans,sum-point);
                point-=cp[i-y];
                point+=cp[i];
            }
            i++;
        }
        ans = max(ans,sum-point);
        return ans;
    }
};