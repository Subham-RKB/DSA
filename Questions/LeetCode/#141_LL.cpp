/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) 
            return false;
        ListNode *t=head;
        ListNode *r=head;
        while(r->next && r->next->next){
            t=t->next;
            r=r->next->next;
            if(t==r){
                return true;
            }
        }
        return false;
    }
};