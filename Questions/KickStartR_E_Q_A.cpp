#include<bits/stdc++.h>
using namespace std;
void print(string a,int i){
    cout<<"Case #"<<i<<": "<<a<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int ii=0;ii<t;ii++){
        int a=1;
        string s;
        cin>>s;
        int im=0;
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])!=m.end()){
                m[s[i]]++;
                if(m[s[i]]>(s.length()/2)){
                    im=1;
                }
            }
            else{
                m.insert({s[i],1});
            }
        }
        if(im){
            cout<<"Case #"<<ii+1<<": IMPOSSIBLE"<<endl;
        }
        else{
            for(int i=0;i<s.length()-1;i++){
                for(int j=i+1;j<s.length();j++){
                    if(s[i]!=s[j]){
                        swap(s[i],s[j]);
                        cout<<s<<endl;
                        break;
                    }
                }
            }
            print(s,ii+1);
        }
    }
}