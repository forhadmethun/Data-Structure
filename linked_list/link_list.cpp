//can be done in three ways


//global variable
//local variable and passing the parameter and returing to the variable
//passing address of the local variable then no need to return to the head pointer ...



#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};

void insert(Node** head, int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->next = *head;
    *head = temp;

}
void print(Node *head){
    Node* temp = head;
    cout << "-!!! " << head->data << endl;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    Node* head  = NULL;
    // freopen("D:\\googleDrive\\_CSE\\Code\\in.txt","r",stdin);
    int n;scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        int x;scanf("%d\n",&x);
       insert(&head, x);
        cout << "----------------> " << x << endl;
        print(head);
    }
}


