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
    ListNode* swapPairs(ListNode* head) {
        ListNode *curr=head;
        ListNode *prev=NULL;
        ListNode *future;
        int a=2;
        while(a-- && curr!=NULL) {
            future=curr->next;
            curr->next=prev;
            prev=curr;
            curr=future;
        }
        if(head!=NULL) head->next=swapPairs(future);
        return prev;
    }
};