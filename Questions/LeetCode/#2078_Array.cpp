class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n=colors.size();
        int a=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(colors[i]!=colors[j]){
                    if(abs(i-j)>a){
                        a=abs(i-j);
                    }
                }
            }
        }
        return a;
    }
};