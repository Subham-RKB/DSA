class Solution {
public:
    int helper(int n,vector<int>& t,vector<int>& b,int aa)
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(t[i]!=aa)
            {
                if(b[i]==aa)
                {
                    count++;
                }
                else return -1;
            }
        }
        return count;
    }
    int minDominoRotations(vector<int>& t, vector<int>& b) {
        vector<int> vT(7,0),vB(7,0),vSame(7,0);
        int n  = t.size();
        int aa=0,bb=0;
        for(int i=0;i<t.size();i++)
        {
            vT[t[i]]++;
            // if(v[t[i]]>=(n+1)/2)
            // {
            //     aa=t[i];
            // }
            vB[b[i]]++;
            // if(v1[b[i]]>=(n+1)/2)
            // {
            //     bb=b[i];
            // }
            if(t[i]==b[i]) vSame[t[i]]++;
        }
        for(int i=1;i<7;i++)
        {
            if(vT[i]+vB[i]-vSame[i]==n)
            {
                return n-max(vT[i],vB[i]);
            }
        }
        // if(aa==0 && bb==0) return -1;
        // int l = helper(n,t,b,aa);
        // int ll =helper(n,b,t,bb);
        // if(l>-1 && ll >-1)
        // {
        //     return min(l,ll);
        // }
        // return max(l,ll);
        return -1;
    }
};