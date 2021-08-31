#include<bits/stdc++.h>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        merged.reserve(nums1.size()+nums2.size());
        merged.insert(merged.end(),nums1.begin(),nums1.end());
        merged.insert(merged.end(),nums2.begin(),nums2.end());
        sort(merged.begin(),merged.end());
        int a=merged.size();
        if(a%2!=0){
            return merged[a/2];
        }
        else{
            return ((merged[a/2-1]+merged[a/2])*1.0/2);
        }
    }
};