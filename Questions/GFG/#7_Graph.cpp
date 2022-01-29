// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minThrow(int n, int arr[]){
        unordered_map<int,int> m;
        for(int i=0;i<2*n-1;i+=2){
            m[arr[i]]=arr[i+1];
        }
        int ans=0;
        queue<int> q;
        q.push(1);
        while(!q.empty()){
            //int r = q.front();
            int k = q.size();
            //cout<<"------"<<endl;
            //q.pop();
            ans++;
            while(k-- && !q.empty()){
                int r= q.front();
                q.pop();
                for(int i=1;i<=6;i++){
                    //cout<<r+i<<endl;
                    if(r+i>=30) return ans;
                    if(m.find(i+r)!=m.end()){ 
                        if(m[i+r]!=30) {
                            q.push(m[i+r]);
                            //cout<<m[i+r]<<endl;
                        }
                        else return ans;
                        
                    };
                    q.push(i+r);
                }
            }
            //ans++;
        }
        return -1;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[2*N];
        for(int i = 0;i < 2*N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.minThrow(N, arr)<<"\n";
    }
    return 0;
}  // } Driver Code Ends