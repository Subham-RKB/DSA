class Solution {
public:
    // vector<int> sq;
    // int  ok=0;
    bool helper(int n,unordered_map<int,bool>& m){
        // if(n==1){
        //     //cout<<n<<" "<<a<<" "<<ok<<endl;
        //     if(a=='A'){
        //         ok|=1;
        //     }
        //     else{
        //         ok|=0;
        //     }
        //     cout<<n<<" "<<a<<" "<<ok<<endl;
        //     return;
        // }
        // if(n<=0){
        //     // //cout<<n<<" "<<a<<" "<<ok<<endl;
        //     // if(a=='A'){
        //     //     ok|=0;
        //     // }
        //     // else{
        //     //     ok|=1;
        //     // }
        //     // cout<<n<<" "<<a<<" "<<ok<<endl;
        //     return false;
        // }
        if(m.find(n)!=m.end()){
            return m[n];
        }
        // if(n==2){
        //     if(a=='A'){
        //         ok|=0;
        //     }
        //     else{
        //         ok|=1;
        //     }
        //     cout<<n<<" "<<a<<" "<<ok<<endl;
        //     return;
        // }
        for(int i=1;i<=int(sqrt(n));i++){
            //cout<<n<<" "<<sq[i]<<" "<<a<<" "<<n-sq[i]<<endl;
             if(!helper(n-(i*i),m)){
                 m[n-i*i]=true;
                 return true;
             }
        }
        m[n]=false;
        return false;
    }
    bool winnerSquareGame(int n) {
        // for(int i=1;i<=int(sqrt(n));i++){
        //     if(i*i<=n){
        //         sq.push_back(i*i);
        //         //cout<<i*i<<endl;
        //     }
        // }
        //unordered_map<int,bool> m;
        //return helper(n,m);
        vector<bool> dp(n+1, false);
        for(int i=1; i<=n;i++) {
            for(int j=1; j*j<=i;j++){
                if(!dp[i-j*j]){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
};