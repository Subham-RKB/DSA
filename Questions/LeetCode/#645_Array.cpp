class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> v(2);
        int tot=accumulate(nums.begin(),nums.end(),0);
        //cout<<tot<<endl;
        int n=nums.size();
        int t= (n*(n+1))/2;
        //cout<<t<<endl;
        int ok=(t-tot);
        set<int> s;
        for(int i=0;i<n;i++){
            if(s.find(nums[i])==s.end()){
                s.insert(nums[i]);
            }
            else{
                v[0]=nums[i];
                v[1]=nums[i]+ok;
                break;
            }
        }
        return v;
    }
};