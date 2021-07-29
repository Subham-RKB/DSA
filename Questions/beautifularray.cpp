class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> answer;
        answer.push_back(1);
        while(answer.size()<n){
            vector<int> v;
            for(int i=0;i<answer.size();i++){
                int el=answer[i];
                if(2*el-1<=n){
                    v.push_back(el*2-1);
                    
                }
            }
                for(int j=0;j<answer.size();j++){
                    int el=answer[j];
                    if(2*el<=n){
                     v.push_back(2*el);   
                    }
                }
                answer=v;
        }
        return answer;
    }
};