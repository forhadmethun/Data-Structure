#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 101
int top = -1;
int A[MAX_SIZE];

void push(int x){
    if(top == MAX_SIZE-1){
        printf("Stack Overflow\n");
        return ;
    }
    A[++top] = x;
//    cout << "---> dhuksii - " << x  << "stack size" << top << endl;
}
void pop(){
    if(top == -1){
        printf("Stack is Empty!!\n");return ;
    }
    top--;
}

void print(){
    for(int i=0;i<=top;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}


int main()
{
    push(2);print();
    push(3);print();
    pop();
    push(4);print();



   // pop();print();
    return 0;
}