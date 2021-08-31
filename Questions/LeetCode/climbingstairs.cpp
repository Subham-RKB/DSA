// class Solution {
// public:
    // int recursive(int n,int *array){
    //     if(n<=1){
    //         return 1;
    //     }
    //     if(array[n]>0) return array[n];
    //     int a=recursive(n-1,array);
    //     int b=recursive(n-2,array);
    //     array[n]=a+b;
    //     return a+b;
    // }
//     int climbStairs(int n) {
//         int[] array={0};
//         return recursive(n,array);
        
//     }
// };
class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1){
            return 1;
        }
        vector<int> v(n+1);
        v[0]=1;
        v[1]=1;
        for(int i=2;i<=n;i++){
            v[i]=v[i-1]+v[i-2];
        }
        return v[n];
    }
};