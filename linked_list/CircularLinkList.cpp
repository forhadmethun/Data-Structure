#include <bits/stdc++.h>
using namespace std;
class Node
{
  public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
    }
};

class CircularLinkList
{
  public:
    Node *head = NULL;
    CircularLinkList(){}
    void insert(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            head->next = head;
            return;
        }

        newNode->next = head->next;
        head->next = newNode;
        head = newNode;
        //head = head->next;
    }
    void print()
    {
        Node *tempNode = head->next;
        while (tempNode->next != head->next)
        {
            cout << " " << tempNode->data << endl;
            tempNode = tempNode->next;
        }
        cout << " " << tempNode->data << endl;
    }
};

int main()
{
    CircularLinkList* ll = new CircularLinkList();
    ll->insert(1);
    ll->insert(2);
    ll->insert(5);
    ll->print();
    
    return 0;
}