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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL){
                return head;
        }
        ListNode *ok=head;
        // ListNode *temp = new ListNode(201,head);
        // ListNode *temp1=temp;
        // ListNode *temp2 = new ListNode(300);
        // ListNode *temp3=temp2;
        vector<ListNode*> vs;
        vector<ListNode*> vb;
        while(ok && ok->next){
            //cout<<ok->val<<endl;
            if(ok->val<x){
                 vs.push_back(ok);
            }
            else{
                vb.push_back(ok);
            }
            ok=ok->next;
        }
        if(ok->val<x){
                 vs.push_back(ok);
            }
            else{
                vb.push_back(ok);
            }
        ListNode *temp =new ListNode(201);
        ListNode *temp1 = temp;
        for(int i=0;i<vs.size();i++){
            temp1->next=vs[i];
            temp1=temp1->next;
        }
        for(int i=0;i<vb.size();i++){
            temp1->next=vb[i];
            temp1=temp1->next;
        }
        temp1->next=NULL;
        return temp->next;
    }
};