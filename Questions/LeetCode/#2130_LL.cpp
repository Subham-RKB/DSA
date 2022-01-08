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
    int pairSum(ListNode* head) {
        vector<int> v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        int s=0;
        int e=v.size()-1;
        int ans=INT_MIN;
        while(s<e){
            if(v[s]+v[e]>ans){
                ans=v[s]+v[e];
            }
            s++;
            e--;
        }
        return ans;
    }
};