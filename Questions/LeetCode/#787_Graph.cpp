class Solution {
public:
    // void helper(vector<vector<int>>& adj,vector<vector<int>> &cost,int src,int dst,int k,int& fare,int totCost,vector<bool>& visited ){
    //     if(k<-1) return;
    //     if(src==dst){
    //         fare=min(fare,totCost);
    //         return;
    //     }
    //     visited[src]=true;
    //     for(int i=0;i<adj[src].size();i++){
    //         if(!visited[adj[src][i]] && (totCost+cost[src][adj[src][i]]<=fare)){
    //             helper(adj,cost,adj[src][i],dst,k-1,fare,totCost+cost[src][adj[src][i]],visited);
    //         }
    //     }
    //     visited[src]=false;
    // }
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        // vector<vector<int>> adj(n);
        // vector<vector<int>> cost(n+1,vector<int>(n+1));
        // for(int i=0;i<flights.size();i++){
        //     adj[flights[i][0]].push_back(flights[i][1]);
        //     cost[flights[i][0]][flights[i][1]]=flights[i][2];
        // }
        // vector<bool> visited(n+1,false);
        // int fare=INT_MAX;
        // helper(adj,cost,src,dst,k,fare,0,visited);
        // if(fare==INT_MAX) return -1;
        // return fare;
        vector<vector<int>> dp(k+2,vector<int>(n,1e9));
        dp[0][src]=0;
        for(int i=1;i<=k+1;i++){
            dp[i][src]=0;
            for(const auto& e:flights){
                dp[i][e[1]]=min(dp[i][e[1]],dp[i-1][e[0]]+e[2]);
            }
        }
        return dp[k+1][dst]>=1e9?-1:dp[k+1][dst];
        
    }
};