class Solution {
public:
    string multiply(string num1, string num2) {
        int a= num1.size();
        int b=num2.size();
        vector<int> v((a+b),0);
        if(num1=="0" || num2=="0") return "0";
        for(int i=a-1;i>=0;i--){
            for(int j=b-1;j>=0;j--){
                v[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                v[i+j]+=v[i+j+1]/10;
                v[i+j+1]%=10;
            }
        }
        string ans="";
        int k=0;
        while(v[k]==0) k++;
        for(int i=k;i<(a+b);i++)
        {
            ans+=to_string(v[i]);
        }
        return ans;
    }
};