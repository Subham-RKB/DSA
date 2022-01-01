class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& v) {
            int n=v.size();
        int ans=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            int e = v[i][1];
            while(i+1<n && v[i+1][0]<e){
                ans++;
                e=min(e,v[i+1][1]);
                i++;
            }
        }
    //     vector<vector<int>> vv;
    //     for(int i=0;i<v.size();i++){
    //         vv.push_back({abs(v[i][0]-v[i][1]),v[i][0],v[i][1]});
    //     }
    //     int ans=0;
    //     sort(vv.begin(),vv.end());
    //     unordered_map<int,int> m;
    //     for(auto& a:vv){
    //         int c=0;
    //         int h=0;
    //         for(int i=a[1];i<a[2];i++){
    //             if(m[i]==1){
    //                 c=1;
    //                 h=i;
    //                 ans++;
    //                 break;
    //             }
    //             else{
    //                 m[i]++;
    //             }
    //         }
    //         if(c){
    //             for(int i=a[1];i<h;i++){
    //                 m[i]--;
    //             }
    //         }
    //     }
    return ans;
    }
};