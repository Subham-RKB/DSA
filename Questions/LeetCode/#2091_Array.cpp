class Solution {
public:
    int maxx(int a,int b){
        if(a>b){
            return a;
        }
        return b;
    }
    int minn(int a,int b){
        if(a>b){
            return b;
        }
        return a;
    }
    int minimumDeletions(vector<int>& nums) {
        int min=INT_MAX;
        int max=INT_MIN;
        int mi=0;
        int mx=0;
        int n=nums.size()/2;
        for(int i=0;i<nums.size();i++){
            if(min>nums[i]) {min=nums[i];mi=i;}
            if(max<nums[i]) {max=nums[i];mx=i;}
        }
        //cout<<mi<<" "<<mx<<" "<<nums.size()<<endl;
        if(mi<=n && mx<=n){
            return mi>mx?mi+1:mx+1;
        }
        else if(mi>=n && mx>=n){
            return nums.size()-mi>nums.size()-mx?nums.size()-mi:nums.size()-mx;
        }
            int mi_e=nums.size()-mi;
            int mx_e=nums.size()-mx;
            int ok = (mx_e>mx?mx:mx_e)+(mi_e>mi?mi:mi_e)+1;
            return minn(maxx(mi,mx)+1,minn(ok,maxx(mi_e,mx_e)));
    }
};