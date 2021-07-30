#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int w,h;
        cin>>w>>h;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int w1,h1;
        cin>>w1>>h1;
        int a,b;
        a=h-y2;
        b=w-x2;
        int ans=0;
        if(a+y1>=h1){
            if(abs(h1-a)>abs(h1-y1)){
                y2=y2-abs(h1-a);
                y1=y1-abs(h1-a);
            }
            else{
                y2=y2+abs(h1-a);
                y1=y1+abs(h1-a);
            }
            ans=abs(h1-a);
        }
        if(b+x1>=h1){
            if(abs(w1-b)>abs(w1-x1)){
                x2=x2-abs(x1-a);
                x1=x1-abs(h1-a);
            }
            else{
                y2=y2+abs(h1-a);
                y1=y1+abs(h1-a);
            }
            ans=abs(h1-a);
        }
    }
}