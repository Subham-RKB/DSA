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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode *temps=head;
        vector<ListNode*> v;
        int n=0;
        while(temps){
            n++;
            temps=temps->next;
        }
        int div=(n/k);
        int rem=n%k;
        ListNode *temp;
        while(head){
            int t=div;
            if(rem>0){
                t++;
                rem--;
            }
            v.push_back(head);
            while(t--){
                temp=head;
                head=head->next;
            }
            temp->next=NULL;
        }
        if(k>n){
            for(int i=0;i<(k-n);i++){
                v.push_back({});
            }
        }
        return v;
    }
};