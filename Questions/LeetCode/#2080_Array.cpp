class RangeFreqQuery {
public:
    vector<int> array[10001];
    RangeFreqQuery(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            array[arr[i]].push_back(i);
        }
    }
    int query(int left, int right, int value) {
        return ((upper_bound(array[value].begin(),array[value].end(),right))-(lower_bound(array[value].begin(),array[value].end(),left)));
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */