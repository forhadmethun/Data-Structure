#include<bits/stdc++.h>
using namespace std;
class Stack{
public:
    int data;
    Stack *next;
};
Stack *top = NULL;

void push(int x){
    Stack *newNode = new Stack();
    newNode->data = x;
    newNode->next = NULL;
    if(top == NULL){
        top = newNode;
    }
    else{
        newNode->next = top;
        top = newNode;
    }
}
void pop(){
    if(top== NULL){
        printf("Stack Empty\n");return;
    }
    else{
        Stack *temp = top;
        top = top->next;
        delete(temp);
    }
}

void print(){
    Stack *temp = top;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}


int main()
{
    push(2);print();
    push(3);print();
    pop();
    push(4);print();
    push(41);print();
    pop();print();



    // pop();print();
    return 0;
}