class Solution {
public:
    vector<int> child[100001];
    int sz[100001];
    int size(int node){
        int ok=1;
        for(auto x:child[node]){
            int ok1= size(x);
            ok+=ok1;
        }
        return sz[node]=ok;
    }
    // void helper(unordered_map<int,vector<int>> m,int k,vector<int>&v){
    //     if(m.find(k)==m.end()){
    //         v[k]=1;
    //         l=n-1;
    //         if(maxi<l){
    //             maxi=l;
    //             ans=1;
    //         }
    //         else if(l==maxi){
    //             ans++;
    //         }
    //         return;
    //     }
    //     helper(m,m[k][0],v);
    //     if(m[k].size()==2){
    //         helper(m,m[k][1],v);
    //         v[k]=v[m[k][0]]+v[m[k][1]]+1;
    //         l=(v[m[k][0]]*v[m[k][1]]);
    //         int s =n-((v[m[k][0]]+v[m[k][1]])+1);
    //         if(s!=0){
    //             l*=s;
    //         }
    //         if(maxi<l){
    //             maxi=l;
    //             ans=1;
    //         }
    //         else if(l==maxi){
    //             ans++;
    //         }
    //     }
    //     else{
    //         v[k]=v[m[k][0]]+1;
    //         l=v[m[k][0]];
    //         int s =(n-v[m[k][0]]-1);
    //         if(s!=0){
    //             k*=s;
    //         }
    //         if(maxi<l){
    //             maxi=l;
    //             ans=1;
    //         }
    //         else if(l==maxi){
    //             ans++;
    //         }
    //     }
    // }
    int countHighestScoreNodes(vector<int>& parents) {
        unordered_map<long long int,int> m;
        int n=parents.size();
        memset(sz,0,sizeof sz);
        for(int i=1;i<parents.size();i++){
            child[parents[i]].push_back(i);
        }
        size(0);
        vector<int> v(n,0);
        long long int maximum = INT_MIN;
        for(int i=0;i<n;i++){
            long long int curr = 1;
            if(parents[i]!=-1){
                curr*=(n-sz[i]);
            }
            for(auto x:child[i]){
                curr*=sz[x];
            }
            maximum = max(maximum,curr);
            m[curr]++;
        }
        return m[maximum];
    }
};