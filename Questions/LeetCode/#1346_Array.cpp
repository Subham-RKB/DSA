class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int,int> m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                if(m[arr[i]]>1){
                    return true;
                }
            }
            else if(m[arr[i]*2]>0){
                return true;
            }
        }
        // for(int i=0;i<arr.size();i++)
        // {
        //     for(int j=0;j<arr.size();j++)
        //     {
        //         if(i!=j && arr[i]*2==arr[j]){
        //             return true;
        //         }
        //     }
        // }
        return false;
    }
};