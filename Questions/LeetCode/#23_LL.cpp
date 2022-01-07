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
class compare{
    public:
    bool operator()(ListNode *a,ListNode *b){
        return (a->val>b->val);
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& l) {
        int n=l.size();
        priority_queue<ListNode*,vector<ListNode*>,compare> pq;
        ListNode *head= new ListNode(0);
        ListNode *head1 =head;
        for(int i=0;i<n;i++){
                if(l[i]!=NULL){
                    pq.push(l[i]);
            }
        }
        while(!pq.empty()){
            ListNode* curr=pq.top();
            pq.pop();
            head1->next=curr;
            curr=curr->next;
            if(curr!=NULL){
                pq.push(curr);
            }
            head1=head1->next;
            head1->next=NULL;
        }
        return head->next;
    }
};