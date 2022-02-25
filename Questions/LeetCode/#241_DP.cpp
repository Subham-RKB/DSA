class Solution {
public:
    vector<int> helper(string input,unordered_map<string,vector<int>> &m)
    {
        vector<int> result;
        int size =input.size();
        for(int i=0;i<size;i++){
            char cur = input[i];
            if(cur=='+' || cur=='-' || cur=='*')
            {
                vector<int> result1,result2;
                string substr = input.substr(0,i);
                if(m.find(substr)!=m.end())
                {
                    result1 = m[substr];
                }
                else{
                    result1 = helper(substr,m); 
                }
                substr = input.substr(i+1);
                if(m.find(substr)!=m.end())
                {
                    result2 = m[substr];
                }
                else{
                    result2 = helper(substr,m); 
                }
                for(auto& n1:result1)
                {
                    for(auto& n2:result2)
                    {
                        cout<<n1<<" "<<n2<<endl;
                        if(cur=='+') result.push_back(n1+n2);
                        else if(cur=='-') result.push_back(n1-n2);
                        else if(cur=='*') result.push_back(n1*n2);
                    }
                }
            }
        }
        if(result.empty()) result.push_back(atoi(input.c_str()));
        m[input]=result;
        return result;
    }
    vector<int> diffWaysToCompute(string expression) {
        unordered_map<string,vector<int>> m;
        return helper(expression,m);
    }
};