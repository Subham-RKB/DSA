/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int,Employee*> m;
        for(auto a:employees){
            m[a->id]=a;
        }
        queue<Employee*> q;
        q.push(m[id]);
        int ans=0;
        while(!q.empty())
        {
            Employee* aa=q.front();
            q.pop();
            for(auto c:aa->subordinates) q.push(m[c]);
            ans=ans+aa->importance;
        }
        return ans;
    }
};