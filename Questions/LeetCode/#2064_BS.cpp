class Solution {
public:
    bool helper(vector<int>& q,int m,int n){
        int num = 0;
        for(int i=0;i<q.size();i++){
            num+= (q[i]/m)+1;
            if(q[i]%m==0) num--;
            if(num>n){
                return false;
            }
        }
        return true;
    }
    int minimizedMaximum(int n, vector<int>& q) {
        int l = 1;
        int h = *max_element(q.begin(),q.end());
        while(l<=h){
            int m = (l+h)/2;
            if(!helper(q,m,n)){
                l = m+1;
            }
            else{
                h=m-1;
            }
        }
        return l;
    }
};