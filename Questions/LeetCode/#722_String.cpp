class Solution {
public:
    vector<string> removeComments(vector<string>& s) {
        vector<string> ans;
        bool multi=false;
        for(auto& y:s){
            bool one=false;
            bool ok=false;
            ok=multi;
            y+='-';
            string k="";
            for(int j=0;j<y.length()-1;){
                if(one){
                    break;
                    
                }
                else if(multi){
                    if(y[j]=='*' && y[j+1]=='/'){
                        multi=false;
                        j=j+2;
                    }
                    else{
                        j++;
                    }
                }
                else if(y[j]=='/' && y[j+1]=='/'){
                    one = true;
                    break;
                }
                else if(y[j]=='/' && y[j+1]=='*'){
                    multi=true;
                    j=j+2;
                }
                else{
                    if(!one && !multi){
                        k+=y[j];
                    }
                    j++;
                }
            }
            if(k.length()>0 && ok){
                if(ans.size()==0){
                    ans.push_back(k);
                }
                else{
                    ans[ans.size()-1]+=k;
                }
            }
            else if(k.length()>0){
                ans.push_back(k);
            }
        }
        return ans;
    }
};