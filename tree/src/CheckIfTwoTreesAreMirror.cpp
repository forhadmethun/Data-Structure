#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

Node *newNode(int data) {
    Node *newNode = new Node(data);
    return newNode;
}

bool areMirror(Node* a, Node* b){
    if(a== NULL && b== NULL) return true;
    if(a->data!=b->data) return false;
    if(areMirror(a->left, b->right) && areMirror(a->right, b->left)){
        return true;
    }
    return false;
}
int main(){
    Node *a = newNode(1);
    Node *b = newNode(1);

    a -> left = newNode(2);
    a -> right = newNode(3);
    a -> left -> left  = newNode(4);
    a -> left -> right = newNode(5);

    b -> left = newNode(3);
    b -> right = newNode(2);
    b -> right -> left = newNode(5);
    b -> right -> right = newNode(4);

    areMirror(a, b)? cout << "Yes" : cout << "No";

    return 0;
    return 0;
}