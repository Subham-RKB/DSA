class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums1.size();i++){
            int a=nums1[i];
            int k=1;
            int c=0;
            for(int j=0;j<nums2.size();j++){
                if(a==nums2[j]){
                    c=1;
                }
                if(c && nums2[j]>nums1[i]){
                    nums1[i]=nums2[j];
                    k=0;
                    break;
                }
            }
            if(k) nums1[i]=-1;
        }   
        return nums1;
    }
};