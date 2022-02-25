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
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
        ListNode *temp1= new ListNode(10000);
        ListNode *k=temp1;
        for(int i=0;i<v.size();i++){
            ListNode *temp2= new ListNode(v[i]);
            k->next=temp2;
            k=k->next;
        }
        return temp1->next;
    }
};