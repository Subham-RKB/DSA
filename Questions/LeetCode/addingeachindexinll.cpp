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
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        struct ListNode* l11,*l22;
        struct ListNode *start=new ListNode(),*end = new ListNode();
        start=NULL;
        end=NULL;
        l11=l1;
        l22=l2;
        int total=0,val=0,carry=0;
        while(l11!=NULL || l22!=NULL){
            if(l11==NULL){
                while(l22!=NULL){
                    total=l22->val+carry;
                    val=total%10;
                    carry=total/10;
                    start=newnode(start,end,val);
                    l22=l22->next;
                }
                if(carry!=0){
                    start=newnode(start,end,carry);
                    carry=0;
                }
                break;
            }
            if(l22==NULL){
                while(l11!=NULL){
                    total=l11->val+carry;
                    val=total%10;
                    carry=total/10;
                start=newnode(start,end,val);
                    l11=l11->next;
                }
                if(carry!=0){
                    start=newnode(start,end,carry);
                    carry=0;
                }
                break;
            }
            total=l11->val + l22->val +carry;
            val=total%10;
            carry=total/10;
            start=newnode(start,end,val);
            l11=l11->next;
            l22=l22->next;
        }
        if(carry!=0){
                start=newnode(start,end,carry);
        }
        return start;
    }
    struct ListNode* newnode(struct ListNode* &start,struct ListNode* &end,int val){
        struct ListNode *temp=new ListNode();
        temp->val=val;
        temp->next=NULL;
        if(start==NULL){
            start=temp;
            end=temp;
        }
        else{
            end->next=temp;
            end=end->next;
        }
        return start;
    }
};
