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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        int n=0;
        while(temp){
            n++;
            temp=temp->next;
        }
        ListNode* i;
        ListNode* j;
        k--;
        int k1= n-k-1;
        ListNode* y=head;
        while(y){
            if(!k){
                i=y;
            }
            if(!k1){
                j=y;
            }
            y=y->next;
            k--;
            k1--;
        }
        swap(i->val,j->val);
        return head;
    }
};