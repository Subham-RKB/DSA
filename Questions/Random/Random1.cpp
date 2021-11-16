#include<bits/stdc++.h>
using namespace std;
int solve(int N,int M,vector<char> toys,vector<int> costofToys){
    set<char> t;
    set<char> u;
    for(int i=0;i<N;i++){
        t.insert(toys[i]);
        if(u.find(toys[i])==u.end()){
            u.insert(toys[i]);
        }
    }
    vector<int> ans;
    int v=0;
    int c=0;
    for(auto i:u){
        v=0;
        c=0;
        for(auto j:t){
            if(i==j){
                v=v+0;
                c=c+1;
            }
            else{
                int asc=abs((int)j-97);
                int temp=v+costOfToys[asc];
                if(m>=temp){
                    v=v+costOfToys[asc];
                    c=c+1;
                }
                else{
                    break;
                }
            }
        }
        ans.push_back(c);
    }
    int answer = *max_element(ans.begin(),ans.end());
    return answer;
}
int main(){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    set<char> t;
    set<char> u;
    for(int i=0;i<n;i++){
        t.insert(s[i]);
        if(u.find(s[i])==u.end()){
            u.insert(s[i]);
        }
    }

}