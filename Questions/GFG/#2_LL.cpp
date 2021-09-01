class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        //if(head==NULL) return head;
        Node *dummy=NULL;
        while(head){
            Node *next=head->next;
            head->next=dummy;
            dummy=head;
            head=next;
        }
        return dummy;
    }
    
};