class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& N) {
        int n=N.size();
        vector<int> zero(n,0);
        if(N[0]==0){
            zero[0]=1;
        }
        else{
            zero[0]=0;
        }
        for(int i=1;i<n;i++){
            if(N[i]==0){
                zero[i]=zero[i-1]+1;
            }
            else{
                zero[i]=zero[i-1];
            }
        }
        vector<int> one(n,0);
        if(N[n-1]==1){
            one[n-1]=1;
        }
        else{
            one[n-1]=0;
        }
        for(int i=n-2;i>=0;i--){
            if(N[i]==1){
                one[i]=one[i+1]+1;
            }
            else{
                one[i]=one[i+1];
            }
        }
        vector<int> ans;
        vector<int> k(n,-1);
        for(int i=1;i<n;i++){
            k[i]=zero[i-1]+one[i];
        }
        int mx=max(zero[n-1],max(one[0],*max_element(k.begin(),k.end())));
        if(one[0]==mx) ans.push_back(0); 
        for(int i=0;i<n;i++){
            if(k[i]==mx){
                ans.push_back(i);
            }
        }
        if(zero[n-1]==mx) ans.push_back(n);
        return ans;
    }
};