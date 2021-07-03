/*
Singly linked list operations:
1.appendNode()
2.prpendNode()
3.insertNodeAfter()
4.deleteNodeByKey()
5.updateNodeByKey()
6.print()
*/
#include<iostream>
using namespace std;
class Node{
    public:
        int key;
        int data;
        Node* next;
        Node(){
            key=0;
            data=0;
            next=NULL;
        }
        Node(int k,int d){
            key=k;
            data=d;
        }
};
class SinglyLinkedList{
    public:
        Node* head;//first node
        SinglyLinkedList(){
            head=NULL;
        }
        SinglyLinkedList(Node *n){
            head=n;
        }

        Node* nodeExists(int k){
            
        }
}

int main()
{
    cout<<"";
}