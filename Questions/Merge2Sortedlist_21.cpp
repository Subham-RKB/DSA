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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode answer;
        if(l1==NULL) return l2;
        if (l2==NULL) return l1;
        ListNode *head= &answer;
        while(l1!=NULL && l2!=NULL){
            if(l1->val>l2->val){
                head->next=l2;
                l2=l2->next;
            }
            else{
                head->next=l1;
                l1=l1->next;
            }
            head=head->next;
        }
        if(l1){
            head->next=l1;
        }
        else if(l2){
            head->next=l2;
        }
        return static_cast<ListNode *>(&answer)->next;
    }
};