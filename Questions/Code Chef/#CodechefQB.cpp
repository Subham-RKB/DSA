// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n,m;
//         cin>>n>>m;
//         string s;
//         cin>>s;
//         int r=0;
//         char o=s[0];
//         for(int i=1;i<n;i++){
//             if(o!=s[i]){
//                 r++;
//                 o=s[i];
//             }
//         }
//         if(r<m){
//             cout<<-1<<endl;
//         }
//         else{
//         pair<int,char> p;
//         queue<pair<int,char>> q;
//         p.first=0;
//         p.second=s[0];
//         q.push(p);
//         while(!q.empty()){
//             pair<int,char> pp=q.front();
//             q.pop();
//             int k=0;
//             for(int i=pp.first+1;i<n;i++){
//                 if(s[i]!=pp.second){
//                     q.push(make_pair(i,s[i]));
//                     k=1;
//                 }
//             }
//             m=m-1;
//             if(m==0){
//                 break;
//             }
//         }
//         pair<int,char> ppp;
//         while(!q.empty()){
//             ppp=q.front();
//             q.pop();
//         }
//         cout<<ppp.first+1<<endl;
//         }
//     }
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        char a = s[0];
        int r = 0;
        for (int i = 1; i < n; i++)
        {
            if (a != s[i])
            {
                r = r + 1;
                a = s[i];
            }
        }
        if (r < m)
        {
            cout << -1 << endl;
        }
        else
        {
            int h=0;
            char a=s[0];
            if (m % 2 != 0)
            {
                
                for (int i = 1; i < n; i++)
                {
                    if (a != s[i])
                    {
                        h = i;
                    }
                }
                
            }
            else
            {
                for (int i = 1; i < n; i++)
                {
                    if (a == s[i])
                    {
                        h = i;
                    }
                }
                
            }
            cout<<h+1<<endl;
        }
    }
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n, k;
//         cin>>n>>k;
//         string s;
//         cin>>s;
//         int rev=0;
//         char p=s[0];
//         for(int i=1; i<n; i++){
//             if(p!=s[i]){
//                 rev++;
//                 p=s[i];
//             }
//         }
//         if(rev<k){
//             cout<<-1<<endl;
//         }
//         else{
//             if(k==1 && s[0]==s[n-1]){
//                 for(int i=n-1; i>=0; i--){
//                     if(s[i]!=s[0]){
//                         cout<<i+1<<endl;
//                         break;
//                     }
//                 }
//             }else{
//                 cout<<n<<endl;
//             }
//         }
//     }
//     return 0;
// }
// Write to Bipul Bainwar
// Aa