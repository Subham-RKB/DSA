// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> v;
//         int max=-10000000;
//         long long int ans=0;
//         int h=0;
//         for(int i=0;i<n;i++){
//             int a;
//             cin>>a;
//             if(a>max){
//                 max=a;
//                 h=i;
//             }
//             v.push_back(a);
//         }
//         if(h==0){
//             ans=max*v[1];
//             cout<<ans<<endl;
//         }
//         else if(h==n-1){
//             ans=max*v[n-2];
//             cout<<ans<<endl;
//         }
//         else{
//         long long int c=v[h-1]>v[h+1] ? v[h-1]:v[h+1];
//         ans=c*max;
//         cout<<ans<<endl;
//         }
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<long long int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    long long int ans=0;
    for(int i=0;i<n-1;i++){
        if(v[i]*v[i+1]>ans){
            ans=v[i]*v[i+1];
        }
    }
    cout<<ans<<endl;
    }
}