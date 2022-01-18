class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> s;
        int n=a.size();
        for(int i=0;i<n;i++){
            if(s.empty()){
                s.push(i);
            }
            else {
                if(a[s.top()]>0 && a[i]<0){
                    int h1=a[s.top()];
                    int h2=abs(a[i]);
                    if(h1>h2){
                        continue;
                    }
                    else if(h1==h2){
                        s.pop();
                    }
                    else{
                        s.pop();
                        i--;
                    }
                }
                else{
                    s.push(i);
                }
            }
        }
//         int n=a.size();
//         int i=0;
//         vector<int> ans;
//         while(a[i]<0) {
//             ans.push_back(a[i]);
//             i++;
//         }
//         cout<<i<<endl;
//         int maxi = INT_MIN;
//         for(int j=i;j<n;j++){
//             if(a[j]>0){
//                 ans.push_back(a[j]);
//                 if(a[j]>maxi){
//                     maxi=a[j];
//                 }
//             }
//             else{
//                 cout<<maxi<<" "<<a[j]<<endl;
//                 int k = ans.size()-1;
//                 cout<<ans[k]<<" "<<j<<endl;
//                 if(abs(a[j])>maxi){
//                     while(k>=0){
//                         if(ans[k]>0) ans.pop_back();
//                         k--;
//                     }
//                     ans.push_back(a[j]);
//                 }
//                 else{
//                     cout<<k<<endl;
//                     while(k>=0){
//                         if(ans[k]==abs(a[j])){ans.pop_back();break;}
//                         if(ans[k]<0) break;
//                         if(ans[k]<abs(a[j]))ans.pop_back();
//                         else break;
//                         k--;
//                     }
                    
//             }
//         }
//         }
//         return ans;
        vector<int> ans;
        while(!s.empty()){
            ans.push_back(a[s.top()]);
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};