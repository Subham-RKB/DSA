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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head, *prev = nullptr, *next = nullptr;
        
        while(curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        head= reverseList(head);
        stack<int> s;
        while(head){
            while(s.empty()==false && head->val>=s.top()) s.pop();
            if(s.empty()) ans.push_back(0);
            else ans.push_back(s.top());
            s.push(head->val);
            head=head->next;
        }
        // vector<vector<int>> ans;
        // stack<int> s;
        // while(head){
        //     if(s.empty()){
        //         s.push(head->val);
        //     }
        //     else{
        //         if(s.top()>head->val){
        //             s.push(head->val);
        //         }
        //         else{
        //             vector<int> v;
        //             v.push_back(0);
        //             while(!s.empty()){
        //                 s.pop();
        //                 v.push_back(head->val);
        //             }
        //             ans.push_back(v);
        //         }
        //     }
        //     head=head->next;
        // }
        // while(!s.empty()){
        //     s.pop();
        //     ans.push_back({0});
        // }
        // vector<int> res;
        // for(int i=0;i<ans.size();i++){
        //     for(int j=ans[i].size()-1;j>=0;j--){
        //         res.push_back(ans[i][j]);
        //     }
        // }
        // if(res.size()<=3){return res;}
        // for(int i=0;i<res.size()-3;i++){
        //     if(res[i+1]==0){
        //         if(res[i]<res[i+2]){
        //                 res[i+1]=res[i+2];
        //         }
        //     }
        // }
        // return res;
        reverse(ans.begin(),ans.end());
        return ans;
    }
};