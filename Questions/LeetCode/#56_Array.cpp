class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> vv;
        sort(intervals.begin(),intervals.end());
        // while(i<=intervals.size()-1){
        //     //cout<<i<<endl;
        //     if(g[1]>=intervals[i][0] && g[1]<=intervals[i][1]){
        //            g[1]=intervals[i][1]; 
        //     }
        //     else if(g[0]<=intervals[i][0] && g[0]<=intervals[i][1] && g[1]>=intervals[i][0] && g[1]>=intervals[i][1]){
        //         continue;
        //     }
        //     else if(g[0]>=intervals[i][0] && g[0]>=intervals[i][1] && g[1]<=intervals[i][0] && g[1]<=intervals[i][1]){
        //         g[0]=intervals[i][0];
        //         g[1]=intervals[i][1];
        //     }
        //     else{
        //         vv.push_back(g);
        //         g[0]=intervals[i][0];
        //         g[1]=intervals[i][1];
        //         //cout<<g[0]<<" "<<g[1]<<endl;
        //     }
        //     i++;
        // }
        // vv.push_back(g);
        // return vv;
        int a=0;
        vv.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(vv[a][1]>=intervals[i][0]) vv[a][1]=max(vv[a][1],intervals[i][1]);
            else {vv.push_back(intervals[i]);a++;}
        }
        return vv;
    }
};