class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int ans = 0;
        string s1 = to_string(num);
        for(int i =0;i<s1.length()-k+1;i++)
        {
            string s2 = s1.substr(i,k);
            //cout<<i<<" "<<i+k<<endl;
            //cout<<s2<<endl;
            int k = stoi(s2);
            if(k!=0 && num%k==0){
                ans++;
            }
        }
        return ans;
    }
};