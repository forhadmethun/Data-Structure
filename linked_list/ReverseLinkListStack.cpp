#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};
Node *head;
void insert(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
    }
    else{
        newNode->next= head;
        head = newNode;
    }
}

void print()
{
    Node *tempNode = head;
    while(tempNode!=NULL){
        printf("%d ",tempNode->data);
        tempNode = tempNode->next;
    }
    printf("\n");
}


int main()
{
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    print();
    Node* tempNode = head;
    stack<Node* > sn;
    while(tempNode!=NULL){
        sn.push(tempNode);
        tempNode = tempNode -> next;
    }
    head = sn.top();
    Node* anotherTempNode = head;
    sn.pop();
    while(!sn.empty()){
        Node* t = sn.top();
        anotherTempNode->next = t;
        anotherTempNode = t;
        //cout << "---> " << t->data << endl;
        sn.pop();
    }
    anotherTempNode->next = NULL;
    printf("After reversing..\n");
    print();




    return 0;
}