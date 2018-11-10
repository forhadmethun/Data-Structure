#include<bits/stdc++.h>

using namespace std;

//class for doubly link list
class Node {
public:
    int data;
    Node *next;
    Node *prev;
};

//insert data at head
void insert_at_head(Node** head, int data) {
    Node *new_node = new Node();
    new_node->prev = NULL;
    new_node->next = NULL;
    new_node->data = data;
    if (*head == NULL) {
        *head = new_node;
    } else {
        new_node->next = *head;
        (*head)->prev = new_node;
        *head = new_node;
    }
}

//insert data at tail
void insert_at_tail(Node** head, int data) {
    Node *newNode = new Node();
    newNode->prev = NULL;
    newNode->next = NULL;
    newNode->data = data;
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = (*head)->next;
        (*head)->next->prev = newNode;
        (*head)->next = newNode;
        newNode->prev = *head;
    }

}

//printing the doubly link list of head
void print(Node* head) {
    Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

//print the doubly link list in reverse order of head
void reverse_print(Node* head) {
    Node *p = head, *q;
    while (p->next != NULL) {
        p = p->next;
    }
    q = p;
    while (q != NULL) {
        printf("%d ", q->data);
        q = q->prev;
    }
    cout << endl;

}

//delete a node from n'th position
void delete_node(Node **head, int position){
    /*
     *
     *     --------             -----------                   -----------------
     *    |  | |   | < ----- > |   |   |   |  <------------> |     |     |     |
     *     --------             -----------                   -----------------
     *
     *
     *
     *
     */

    Node* forward_node = *head;
    if(position == 1){
        //if head node
        *head = (*head)->next;
        (*head)->prev = NULL;
        free(forward_node);
        return;
    }
    while(--position){
        forward_node = forward_node->next;
    }
    if(forward_node->next == NULL){
        //if last node of the list
        forward_node->prev->next = NULL;
        free(forward_node);
        return;
    }
    forward_node->next->prev = forward_node->prev;
    forward_node->prev->next = forward_node->next;
    free(forward_node);
    return;



}

int main() {
    Node *head = NULL;

    //inserting at head
    cout << "inserting 5" << endl;
    insert_at_head(&head, 5);
    print(head);
    cout << "inserting 6" << endl;
    insert_at_head(&head,6);    print(head);
    cout << "inserting 4" << endl;
    insert_at_head(&head,4);    print(head);
    cout << "inserting 3" << endl;
    insert_at_head(&head,3);    print(head);

    //inserting at tail
    cout <<"inserting 5 tail" << endl;
    insert_at_tail(&head,5);    print(head);
    cout <<"inserting 2 tail" << endl;
    insert_at_tail(&head,2);    print(head);
    cout <<"inserting 9 tail" << endl;
    insert_at_tail(&head,9);    print(head);

    //printing whole sequence
    cout <<"head printing" << endl;
    print(head);
    cout <<"head reverse printing" << endl;
    reverse_print(head);

    //delete test
    cout << "printing whole list" << endl;
    print(head);
    cout << "deleting first element"<< endl;
    delete_node(&head,1);
    cout <<"After deleting the first element" << endl;
    print(head);


    cout <<"Deleting 2nd element" << endl;
    delete_node(&head,2);
    print(head);


    cout <<"Deleting 5th element" << endl;
    delete_node(&head,5);
    print(head);

    cout << "deleting first element"<< endl;
    delete_node(&head,1);
    cout <<"After deleting the first element" << endl;
    print(head);




}

