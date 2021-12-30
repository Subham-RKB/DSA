class Solution {
public:
    int fib(int n) {
        // vector<int> v(31);
        // v[0]=0;
        // v[1]=1;
        // for(int i=2;i<31;i++){
        //     v[i]=v[i-1]+v[i-2];
        // }
        // return v[n];
        if(n==0 || n==1){
            return n;
        }
        return fib(n-1)+fib(n-2);
    }
};