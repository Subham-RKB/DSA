class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int k=f.size();
        for(int i=0;i<k;i++){
            if(f[i]==0){
                int P=(i==0)||f[i-1]==0?0:1;
                int N=(i==(k-1)||f[i+1]==0?0:1);
                if(P==0 && N==0){
                    n--;
                    f[i]=1;
                }
            }
        }
//         int k=f.size(); 
//         int z=0;
//         int y=0;
//         for(int i=0;i<k;i++){
//             if(f[i]==0){
//                 z++;
//                 if(i-1>=0 && f[i-1]==1 && y==0){
//                     z--;
//                     y=1;
//                 }
//                 if(i+1<k && f[i+1]==1 && y==0){
//                     z--;
//                     y=1;
//                 }
//             }
//             y=0;
            
//         }
//         cout<<z<<endl;
//         // if(z<0){
//         //     z=0;
//         // }
//         return ((z+1)/2)>=n;
        return  n<=0;
    }
};