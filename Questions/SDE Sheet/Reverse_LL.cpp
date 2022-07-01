#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int d)
    {
        data = d;
    }
};
class SinglyLinkedList
{
public:
    Node *head;
    SinglyLinkedList()
    {
        head = NULL;
    }
    SinglyLinkedList(Node *n)
    {
        head = n;
    }
    void appendNode(Node *n)
    {
        if (head == NULL)
        {
            head = n;
        }
        else
        {
            Node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = n;
        }
    }
    void printList()
    {

        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void reverse()
    {
        Node *prev = NULL;
        Node *temp;
        while (head != NULL)
        {
            temp = head->next;
            head->next = prev;
            prev = head;
            head = temp;
        }
        while (prev != NULL)
        {
            cout << prev->data << " ";
            prev = prev->next;
        }
    }
};

int main()
{
    SinglyLinkedList s;
    int n, d;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        Node *n1 = new Node();
        n1->data = d;
        s.appendNode(n1);
    }
    //s.printList();
    s.reverse();
    s.printList();
    return 0;
}