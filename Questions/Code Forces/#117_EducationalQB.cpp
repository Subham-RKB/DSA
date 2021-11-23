#include<iostream>
using namespace std;
int main(){
	int t,a,b;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a>>b;
		if((a+b)%2==0){
			int k=(a+b)/2;
			for(int j=0;j<=k;j++){
				if(j<=a && (k-j)<=b){
					cout<<j<<" "<<(k-j)<<endl;;
					break;
				}
			}
		}
		else
		cout<<-1<<" "<<-1<<endl;
	}
	return 0;
}