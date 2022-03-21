class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> v(26,0);
        int n =s.length();
        //cout<<n<<endl;
        for(int i=0;i<s.length();i++)
        {
            v[s[i]-'a']=i;
        }
        vector<int> ans;
        int a =0;
        for(int i=0;i<n;i++)
        {
            int k = v[s[i]-'a'];
            while(i<=k)
            {
                k=max(k,v[s[i]-'a']);
                i++;
            }
            ans.push_back(i-a);
            a=i;
            i--;
        }
        return ans;;
    }
};
// a a a b a b c b a c a 