/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        //Initializing vector
        vector<int> v(10001,0);
        for(int i=0;i<nums.size();i++){
            v[nums[i]]=1;
        }
        int ans=0;
        while(head){ //Iterate linked list
            if(v[head->val]){
                //if the val in node is present in nums array checking if the consecutives nodes are                    present in array and nodes.  
            while(head && v[head->val]){
                head=head->next;
            }
            //For all the consecutive nodes and their val present in nums we increase ans by 1 (1-component).
                ans++;
            }
            if(head && head->next) head=head->next; //Iterating the linked list 
            else break; //handling null node which we might get after using previous while loop
        }
        return ans;
    }
};