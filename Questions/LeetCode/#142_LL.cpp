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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return head;
        set<ListNode*> s;
        s.insert(head);
        ListNode* temp=NULL;
        while(head->next!=NULL)
        {
            head=head->next;
            if(s.find(head)==s.end()){
                s.insert(head);
            }
            else{
                temp=head;
                break;
            }
        }
        return temp;
    }
};