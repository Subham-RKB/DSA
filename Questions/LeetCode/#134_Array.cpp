class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        vector<int> v(2*n);
        for(int i=0;i<n;i++){
            v[i]=gas[i]-cost[i];
            v[i+n]=gas[i]-cost[i];
        }
        for(int i=0;i<2*n;i++) cout<<v[i]<<" ";
        int a=0,c=0;
        for(int i=0;i<n;i++){
            a=v[i];
            for(int j=i+1;j<n+i;j++){
                if(a<0){
                    c=1;
                    break;
                }
                a=a+v[j];
            }
            if(a>=0) return i;
        }
        return -1;
        // vector<int> ans(2*gas.size()+1);
        // for(int i=0;gas.size();i++){
        //     ans[i]=cost[i]-gas[i];
        // }
        // for(int i=0;i<gas.size();i++){
        //     ans[i+gas.size()]=ans[i];
        // }
        // int a=0;
        // for(int i=gas.size();i<2*gas.size();i++){
        //     ans[i]=ans[a++];
        // }
        // int h=0,c=0;
        // a=0;
        // for(int i=0;i<gas.size();i++){
        //     for(int j=i+1;j<=gas.size();i++){
        //         a=a+ans[i+j];
        //         if(a<0){
        //             c=1;
        //             break;
        //         }
        //     }
        //     if(c) {h=i;break;}
        // }
        // return h;
    }
};