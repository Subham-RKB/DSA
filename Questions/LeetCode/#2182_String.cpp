class Solution {
public:
    string repeatLimitedString(string s, int k) {
        string ans="";
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        priority_queue<pair<char,int>> q;
        for(auto &i:m){
            q.push({i.first,i.second});
        }
        while(!q.empty()){
            char f = q.top().first;
            int se =q.top().second;
            q.pop();
            int size = min(se,k);
            for(int i=0;i<size;i++)
            {
                ans+=f;
            }
            if(se-k>0){
                if(!q.empty()){
                    char ff = q.top().first;
                    int se2 =q.top().second;
                    q.pop();
                    ans+=ff;
                    if(se2-1>0){
                        q.push({ff,se2-1});
                    }
                }
                else{
                    return ans;
                }
                q.push({f,se-k});
            }
            
        }
//         queue<char> q;
//         sort(s.begin(),s.end());
//         reverse(s.begin(),s.end());
//         cout<<s<<endl;
//         int n =s.length();
//         char first= s[0];
//         int rem=0;
//         int k =0;
//         for(int i=0;i<n;i++){
//             rem=0;
//             while(s[i]==first){
//                 rem++;
//                 if(rem>r){
//                     q.push(s[i]);
//                     cout<<s[i]<<endl;
//                 }
//                 i++;
                
//             }
//             first=s[i];
//             i--;
//         }
//         string ans="";
//         if(1){
//             char first= s[0];
//             int rem=0;
//             int k =0;
//             ans="";
//             for(int i=0;i<n;i++){
//                 rem=0;
//                 while(s[i]==first){
//                     rem++;
//                     if(rem<=r){
//                         ans+=s[i];
//                         while(s[i]<q.front() && !q.empty()){
//                             ans+=q.front();
//                             q.pop();
//                         }
//                         //q.push(s[i]);
//                         //cout<<s[i]<<endl;
//                     }
//                     i++;

//                 }
//             first=s[i];
//             i--;
//         }
//         }
//         cout<<"-----------------"<<endl;
//         return ans;
//     }
        return ans;
    }
};