class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> S;
        stack<int> S1;
        int sum = 0;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="D"){
                S.push(S.top()*2);
            }
            else if(ops[i]=="C")
            {
                S.pop();
            }
            else if(ops[i]=="+")
            {
                sum = 0;
                int a1 = S.top();
                S.pop();
                int a2 = S.top();
                S.pop();
                S.push(a2);
                S.push(a1);
                S.push(a1+a2);
                // while(!S.empty())
                // {
                //     sum+=S.top();
                //     S1.push(S.top());
                //     S.pop();
                // }
                // S1.push(sum);
                // cout<<sum<<endl;
                // swap(S1,S);
            }
            else{
                int ans = 0;
                int l = 0;
                int k = 1;
                if(ops[i][0]=='-'){
                    l++;
                    k=-1;
                }
                for(int j=l;j<ops[i].length();j++)
                {
                    ans=(ans*10)+(ops[i][j]-'0');
                }
                S.push(ans*k);
                //cout<<ans*k<<endl;
            }
        }
        int ans = 0;
        while(!S.empty())
        {
            //cout<<"TOP"<<endl;
            cout<<S.top()<<" ";
            ans+=S.top();
            S.pop();
        }
        cout<<endl;
        return ans;
    }
};