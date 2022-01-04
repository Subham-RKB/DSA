class Solution {
public:
    int numSplits(string s) {
        vector<int> v(27,0);
        vector<int> vv(27,0);
        vector<int> pre(s.length(),0);
        vector<int> post(s.length(),0);
        int p=0;
        for(int i=0;i<s.length();i++){
            int a= int(s[i])-97;
            //cout<<a<<endl;
            if(v[a]==0){
                v[a]=1;
                p++;
                pre[i]=p;
            }
            else{
                pre[i]=p;
            }
           // cout<<pre[i]<<" ";
        }
         p=0;
        for(int i=s.length()-1;i>=0;i--){
            int a= int(s[i])-97;
            if(vv[a]==0){
                vv[a]=1;
                p++;
                post[i]=p;
            }
            else{
                post[i]=p;
            }
            //cout<<post[i]<<" ";
        }
        int ans=0;
        for(int i=0;i<s.length()-1;i++){
            if(pre[i]==post[i+1]){
                ans++;
            }
        }
        return ans;
    }
};