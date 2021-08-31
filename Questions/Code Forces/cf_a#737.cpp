#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> v;
        for(long long int i=0;i<n;i++){
            long long int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        long long int sum=0;
        long long int b=v[n-1];
        //cout<<b<<endl;
        for(int i=0;i<n-1;i++){
            sum=sum+v[i];
            //cout<<sum<<endl;
        }
        printf("%.8lf\n",(sum)*1.0000000/(n-1)+b);
    }
}