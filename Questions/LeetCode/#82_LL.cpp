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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        map<int,bool> m;
        ListNode *temp=head;
        ListNode *last = new ListNode();
        while(temp){
            if(m.find(temp->val)==m.end()){
                m[temp->val]=true;
            }
            else{
                m[temp->val]=false;
            }
            temp=temp->next;
        }
        ListNode *ans = new ListNode(300,head);
        ListNode *ans2 = ans;
        ListNode *k=head;
        while(k){
            if(m[k->val]==true){
                ans->next=k;
                ans=ans->next;
            }
            else{
                ans->next=NULL;
            }
            k=k->next;
        }
        return ans2->next;
    }
};