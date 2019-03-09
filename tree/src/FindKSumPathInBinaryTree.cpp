//
// Created by forhad on 2/23/19.
//
#include<bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node *right;
    Node *left;

    Node(int data) {
        this->data = data;
        right = NULL;
        left = NULL;
    }
};

vector<int> v;
void printPath(int s) {
    for(int i = s; i < v.size(); i++){
        cout << " " << v[i];
    }
    cout << endl;
}
void printKPath(Node *root, int k) {
    if(!root)return;
    v.push_back(root->data);
    printKPath(root->left, k);
    printKPath(root->right, k);

    int f = 0;
    for(int i = v.size()-1; i >= 0; i--){
        f+=v[i];
        if(f == k){
            printPath(i);
        }
    }
    v.pop_back();


}



int main() {
    Node *root = new Node(1);
    root->left = new Node(3);
    root->left->left = new Node(2);
    root->left->right = new Node(1);
    root->left->right->left = new Node(1);
    root->right = new Node(-1);
    root->right->left = new Node(4);
    root->right->left->left = new Node(1);
    root->right->left->right = new Node(2);
    root->right->right = new Node(5);
    root->right->right->right = new Node(2);

    int k = 5;
    printKPath(root, k);

    return 0;
}

