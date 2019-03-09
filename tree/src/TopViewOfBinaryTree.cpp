#include<bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;
    int hd;

    Node(int data) {
        this->data = data;
        left = right = NULL;
        hd = 0;
    }
};

Node *newNode(int data) {
    Node *newNode = new Node(data);
    return newNode;
}
void topView(Node* root){
    map<int, int> m;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        if(m.count(front->hd) == 0){
            m[front->hd] = front->data;
        }
        if(front->left){
            front->left->hd = front->hd - 1;
            q.push(front->left);
        }
        if(front->right){
            front->right->hd = front->hd + 1;
            q.push(front->right);
        }
    }
    for(auto i = m.begin(); i != m.end(); i++){
        cout << i->second << " ";
    }
    cout << endl;
}

int main() {
    /* Create following Binary Tree
               1
           / \
           2 3
           \
               4
               \
               5
               \
                   6*/
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->right = newNode(4);
    root->left->right->right = newNode(5);
    root->left->right->right->right = newNode(6);
    cout << "Following are nodes in top view of Binary Tree\n";
    topView(root);
    return 0;
//    return 0;
}