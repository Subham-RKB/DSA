#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[1001];
    int a=0;
    for(int i=1;i<16667;i++){
        if(i%3!=0 && i%10!=3){
            arr[a++]=i;
        }
    }
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        cout<<arr[n]<<endl;
    }
}