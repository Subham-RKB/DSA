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
    ListNode* helper(ListNode* head,int k){
        ListNode *curr=head;
        ListNode *prev=NULL;
        ListNode *future;
        ListNode *temp=head;
        int j=0;
        bool f=false;
        while(temp){
            j++;
            temp=temp->next;
            if(j>=k){
                f=true;
                break;
            }
        }
        if(f){
        int count=k;
        while(count-- && curr!=NULL){
            future=curr->next;
            curr->next=prev;
            prev=curr;
            curr=future;
        }
        if(head!=NULL) head->next=helper(future,k);
        return prev;
        }
        return head;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        return helper(head,k);
    }
};