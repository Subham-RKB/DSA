class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> m;
        vector<int> v(300,0);
        int k=0;
        int y=0;
        //cout<<int('z')<<endl;
        for(auto& a:words){
            int x = int(a[0]);
            int y = int(a[1]);
            if(x==y){
                v[x+y]+=1;
            }
            else{
                m[a]++;
            }
        }
        for(auto& a:m){
            string k=a.first;
            string c="";
            c+=k[1];
            c+=k[0];
            if(m.find(c)!=m.end()){
                //cout<<m[k]<<" "<<m[c]<<endl;
                int j=min(m[k],m[c]);
                m[k]=max(m[k]-j,0);
                m[c]=max(m[c]-j,0);
                y+=j;
                
            }
        }
        int eq=0;
        int one=1;
        for(int i=0;i<300;i++){
            if(v[i]==1 && one==1){
                one=0;
                eq+=2;
            }
            else{
                if(v[i]%2!=0 && one==1){
                    one=0;
                    eq+=(2*v[i]);
                }
                else if(v[i]%2!=0){
                    eq+=(2*(v[i]-1));
                }
                else if(v[i]%2==0){
                    eq+=(2*(v[i]));
                }
            }
        }
       return (y*4+eq);
    }
};