class Solution {
public:
    static bool compare(vector<int>&a,vector<int>&b)
    {
        if(a[0]!=b[0]) return a[0]<b[0];
        return a[1]>b[1];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        //vector<vector<int>> v =  {{5,0},{7,0},{5,2},{6,1},{4,4},{7,1}};
        vector<vector<int>> v(people.size(),vector<int>());
        sort(people.begin(),people.end(),compare);
        for(int i=0;i<people.size();i++)
        {
            int k = people[i][1];
            int count=0, j;
            for(j=0;j<v.size();j++)
            {
                if(v[j].empty())
                {
                    if(count==people[i][1])
                    {
                        break;
                    }
                    count++;
                }
            }
            v[j]=people[i];
        }
        return v;
    }
};
// [7,0],[4,4],[7,1],[5,0],[6,1],[5,2] //