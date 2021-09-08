class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int tot=n*(n+1)/2;
        int c=accumulate(array.begin(),array.end(),0);
        return tot-c;
    }
}