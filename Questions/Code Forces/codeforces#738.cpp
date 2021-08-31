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
        char rr='R';
        char bb='B';
        int b=0;
        while(0<s1.length()){
            if(i%2==0){
                if(s1[0]=='?'){
                    s1[0]=bb;
                }
                else if(s1[0]=='R'){
                    r=r+1;
                }
            }
            else{
                if(s1[0]=='?'){
                    s1[0]='R';
                }
                else if(s1[0]=='B'){
                    r=r+1;
                }

            }
            s1=s1.substr(b++,s1.length());
        }
        int a=0;
        while(0<s2.length()){
            if(s2[0]=='?'){
                s2[i]='R';
            }
                else if(s2[i]=='B'){
                    b=b+2;
                }
            }
            else{
                if(s2[i]=='?'){
                    s2[i]='B';
                }
                else if(s2[i]=='R'){
                    b=b+2;
                }

            }
            s2=s2.substr(a++,s2.length());
        }
        string ans= r>=b?s2:s1;
        cout<<ans<<endl;
    }
}