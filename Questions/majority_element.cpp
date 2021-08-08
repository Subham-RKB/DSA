#include<bits/stdc++.h>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a=0;
        int c=0;
        for(int num:nums){
            if(num==a){
                c++;
            }
            else if(c==0){
                a=num;
                c=1;
            }
            else{
                c--;
            }
        }
        return a;
    }
};