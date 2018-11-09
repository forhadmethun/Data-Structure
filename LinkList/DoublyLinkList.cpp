#include<bits/stdc++.h>
using namespace std;

//class for doubly link list
class Node{
public:
    int data;
    Node *next;
    Node *prev;
};
Node *head;

void insert_at_head(int data){
    Node *newNode = new Node();
    newNode->prev = NULL;
    newNode->next = NULL;
    newNode->data = data;
    if(head == NULL){
        head = newNode;
    }
    else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
void insert_at_tail(int data)
{
    Node *newNode = new Node();
    newNode->prev = NULL;
    newNode->next = NULL;
    newNode->data = data;
    if(head == NULL){
        head = newNode;
    }
    else{
        newNode->next = head->next;
        head->next->prev = newNode;
        head->next= newNode;
        newNode->prev = head;
    }

}
void print(){
    Node *temp = head;
    while(temp!=NULL){
        //cout << temp->data << endl;
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void reverse_print(){
    Node *p= head, *q;
    while(p->next != NULL){
        p = p ->next;
    }
    q = p;
    while(q!= NULL){
        printf("%d ",q->data);
        q = q->prev;
    }
    cout << endl;

}

int main(){
    insert_at_head(5);
    insert_at_head(6);
    insert_at_head(4);
    insert_at_head(3);


   insert_at_tail(5);

    insert_at_head(2);

    insert_at_tail(9);

    print();
    reverse_print();
}