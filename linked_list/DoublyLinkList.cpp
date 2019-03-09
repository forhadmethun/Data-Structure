#include<bits/stdc++.h>

using namespace std;

//class for doubly link list
/*
For doubly link list every node has two pointers
one for previous and another for next.
 */
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

//3. reverse a doubly link list
/*
a) original  doubly link list
 NULL -> 1 <-> 2 <-> 3 <-> NULL

b) reversed doubly link list
 NULL ->3 <-> 2 <-> 3 <-> NULL

STEP:
    1. swap the previous and next pointer of all the nodes and it will automatically reverse doubly link list
    2. check corner case for the head pointer

*/


//4. great tree list recursion problem
/*
Question: Convert a Binary Tree to a Circular Doubly Link List
Ref: http://cslibrary.stanford.edu/109/TreeListRecursion.html
 */

//5. copy link list with next and arbitrary pointer

//6. quick sort on doubly link list

//7. swap kth node from beginning with kth node from end

//8. merge sort doubly link list

//9. create doubly link list with ternary tree

//10. find pair with given sum in doubly link list

//11. Insert value in sorted way in a sorted doubly link list

//12. Delete a doubly link list node at a given position

//13. Count triplets in a sorted doubly link list whose sum is equal to a given value x

//14. remove duplicate from a sorted doubly link list

//15. delete all occurrences of a given key in a doubly link list

//16. remove duplicate from an unsorted doubly link list

//17. sort the biotonic doubly link list

//18. sort a k sorted doubly link list

//19. convert a given binary tree to doubly link list

//20. program to find size of doubly link list

//21. sorted insert in a doubly link list with head and tail pointers

//22. large number arithmetic using doubly linked list

//23. rotate doubly link list by N nodes

//24. priority que using doubly linked list

//25. reverse a doubly linked list in group of given size

//26. doubly circular link list insertion

//27. doubly circular link list deletion



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

