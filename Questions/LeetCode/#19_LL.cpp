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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head;
        // ListNode* temp1=head;
        // ListNode* temp2=head;
        // while(temp2->next && temp2->next->next){
        //     temp1=temp1->next;
        //     for(int i=0;i<n;i++){
        //         temp2=temp2->next;
        //     }
        // }
        // temp1->next=temp2;
        // return temp1;
        // ListNode* temp=head;
        // ListNode* temp2= head;
        // ListNode* temp3;
        // int c=0;
        // while(temp){
        //     c++;
        //     temp=temp->next;
        // }
        // temp3=temp2;
        // for(int i=0;i<(c-n)-1;i++){
        //     temp2=temp2->next;
        //     t
        // }
        // temp2=temp2->next->next;
        // return temp;
        ListNode* slow=head;
        ListNode* fast=head;
        while(n>0){
            fast=fast->next;n--;
        }
        if(fast==NULL) return head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};