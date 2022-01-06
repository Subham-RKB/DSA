class Solution {
public:
    bool carPooling(vector<vector<int>>& vec, int capacity) {
        int n=vec.size();
        vector<int> v(1001,0);
        for(auto& a:vec){
            v[a[1]]+=a[0];
            v[a[2]]-=a[0];
        }
        int sum=0,maxx=0;
        for(int i:v){
            cout<<i<<" ";
            sum=sum+i;
            maxx=max(maxx,sum);
        }
        //cout<<maxx<<endl;
        return (capacity>=maxx); 
    }
};