#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool two(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        ll co=0;
        cin>>n;
        queue<int> q;
        q.push(n);
        while(!q.empty()){
            int c=q.front();
            q.pop();
            int k=0,s=0,h;
            if(c==0){
                break;
            }
            if(c%2!=0){
                q.push(c-1);
                co++;
            }
            else{
                for(ll i=sqrt(n);i>=2;i--){
                    if(c%i==0 && two(i)){
                        co++;
                        h=i;
                        if(c%(i*2)==0){
                            q.push(c/(i*2));
                            k=1;
                        }
                        else{
                            q.push(c/i);
                            s=1;
                        }
                    }
                }
            }  
        }
        if(co%2!=0) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
}