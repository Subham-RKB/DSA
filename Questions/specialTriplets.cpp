#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=9;
    int c=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                if(i%j==k && j%k==0){
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    c=c+1;
                }
            }
        }
    }
    cout<<c<<endl;
}

//Odd Even Waa One and any number 
