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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return head;
        ListNode *odd=head, *evenhead=head->next, *even = evenhead;
        while(even && even->next)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next = evenhead;
        //return head;
        
//         if(!head) return head;
//         ListNode *odd=head;
//         ListNode *evenhead=head->next,*even=evenhead;
//         while(even->next->next && even){
//             odd->next=odd->next->next;
//             even->next=even->next->next;
//             odd=odd->next;
//             even=even->next;
            
//         }
        // while(even && even->next){
        //     even->next=even->next->next;
        //     even=even->next;
        // }
        //odd->next=evenhead;
        return head;
    }
};