class Solution {
public:
    int scoreOfParentheses(string s) {
        int k=0;
        int ans=0;
        int count=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                count++;
                k=1;
            }
            else{
                //cout<<count<<endl;
                if(k==1)
                {
                    count--;
                    ans+=pow(2,count);
                    k=0;
                }
                else{
                    count--;
                }
            }
        }
        return ans;
    }
};
//((()())()) 0 0 empty
// 2 