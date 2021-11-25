class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> ans;
        int i = 0, j = 0;
        while(i < firstList.size() && j < secondList.size()) {
			// intersection condition
            if(firstList[i][1] >= secondList[j][0] && firstList[i][0] <= secondList[j][1]) 
                ans.emplace_back(initializer_list<int>{ max(firstList[i][0], secondList[j][0]), min(firstList[i][1], secondList[j][1]) });
            firstList[i][1] < secondList[j][1] ? i++ : j++;    // increment pointer of list whose interval ended first
        }
        return ans;   
    }
};