#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s1;
        cin>>n>>s1;
        string s2=s1;
        int r=0;
        int b=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(s1[i]=='?'){
                    s1[i]='B';
                }
                else if(s1[i]=='R'){
                    r=r+1;
                }
            }
            else{
                if(s1[i]=='?'){
                    s1[i]='R';
                }
                else if(s1[i]=='B'){
                    r=r+1;
                }

            }
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(s2[i]=='?'){
                    s2[i]='R';
                }
                else if(s2[i]=='B'){
                    b=b+1;
                }
            }
            else{
                if(s2[i]=='?'){
                    s2[i]='B';
                }
                else if(s2[i]=='R'){
                    b=b+1;
                }

            }
        }
        string ans= r>b?s2:s1;
        cout<<ans<<endl;
    }
}