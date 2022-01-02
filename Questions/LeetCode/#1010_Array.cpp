class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& t) {
        int n=t.size();
        int ans=0;
        vector<int> v(61,0);
        for(int i=0;i<n;i++){
            if(t[i]%60==0) ans+=v[0];
            else ans+=v[60-t[i]%60];
            v[t[i]%60]++;
            //v[(ceil((1.0*t[i])/60)*60)-t[i]]+=1;
            //cout<<ceil(1.0*t[i]/60)*60-t[i]<<endl;
        }
        return ans;
    }
};