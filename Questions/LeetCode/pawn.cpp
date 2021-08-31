#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>b>>a;
        b="0"+b+"0000";
        int ans=0;
        for(int i=0;i<n;i++){
            if(a[i]=='1' && b[i+1]=='0')
                {ans=ans+1;}
            else if(a[i]=='1' && b[i]=='1')
                {ans=ans+1;}
            else if(a[i]=='1' && b[i+2]=='1')
                {ans=ans+1;}
            b=b.substr(0,i+2)+"x"+b.substr(i+3,b.length()+1);
        }
        cout<<ans<<endl;
    }
}

// for i in range(int(input())):
//   n=int(input())
//   b=input()
//   a=input()
//   b="0"+b+"0"+"000"
//   count=0
//   for i in range(n):
//     if(a[i]=="1" and b[i+1]=="0"):
//       count+=1
//     elif(a[i]=="1" and b[i]=="1"):
//       count+=1
//     elif(a[i]=="1" and b[i+2]=="1"):
//       count+=1
//       b=b[0:i+2]+"x"+b[i+3:]
//   print(count)
