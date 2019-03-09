//incomplete
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data = data;
            left = right = NULL;
        }
};
Node* root = NULL;
void circularInsert(int data){

    Node* newNode = new Node(data);
//    newNode->right = newNode;
//    newNode->left = newNode;

    Node* tempNode = root;
    if(tempNode == NULL){
        root = newNode; 
        return;
    }
    //3 8  
    if(tempNode->right!=tempNode)
    while(data >= tempNode->data && tempNode!=root){
        tempNode = tempNode->right; 
    }
    tempNode = tempNode->left;
    cout << "came" << endl;
    //set left of new node
    newNode->left = tempNode;
    //set right of new node
    newNode->right = tempNode->right;
    tempNode->right = newNode;
//    tempNode->left = newNode;


}
void printCircularSortedList(){
    Node* tempNode = root;

    //cout << 1 << endl;
    while(tempNode!=NULL){
        //cout << 2 << endl;
        cout <<" " << tempNode->data ;
        tempNode = tempNode->right;
        if(tempNode == root) break;
    }
    cout << endl;
}
int main(){
    circularInsert(3);
    circularInsert(4);
    circularInsert(8);
    printCircularSortedList();
    return 0;
}