class Solution {
public:
    int count=0;
    vector<int> n1;
    vector<int> n2;
    vector<int> n3;
    vector<int> n4;
    void helper(int t,vector<int>& nums,int n,int l){
       if(n==4){
           cout<<l<<" t="<<t<<endl;
           //n=n+1;
           if(t==0){
               count++;
           }
           return;
       }
       for(int i=0;i<nums.size();i++){
           t+=nums[i];
           cout<<nums[i]<<"= "<<t<<endl;
           if(n==1) helper(t,n2,n+1,nums[i]);
           if(n==2) helper(t,n3,n+1,nums[i]);
           if(n==3) helper(t,n4,n+1,nums[i]);
           t-=nums[i];
        }
        
    }
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        // n1=nums1;
        // n2=nums2;
        // n3=nums3;
        // n4=nums4;
        // for(int i=0;i<n1.size();i++){
        //     helper(0,n1,1,n1[i]);
        // }
        unordered_map<int, int> m;
        int n = nums1.size();
        int count = 0;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++) m[nums1[i] + nums2[j]]++;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++) count+= m[-(nums3[i] + nums4[j])];
        
        return count;
    }
};