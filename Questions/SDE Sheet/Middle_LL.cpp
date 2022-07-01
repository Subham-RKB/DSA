#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Solution
{
public:
    Node *head;
    Solution()
    {
        head = NULL;
    }
    Solution(Node *n)
    {
        head = n;
    }
    void append(Node *n)
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
    void middleElement()
    {
        Node *fast = head;
        Node *slow = head;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        cout << slow->data << endl;
    }
};
int main()
{
    Solution S;
    int n, d;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        Node *tmp = new Node();
        tmp->data = d;
        S.append(tmp);
    }
    S.printList();
    S.middleElement();
}