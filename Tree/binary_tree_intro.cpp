#include<bits/stdc++.h>
using namespace std;
/**
 * Trees are hierarchical data structures not a liner data structures
 *
 * Vocabulary:
 *  *root
 *  *leaves
 *  *children
 *  *parent
 *  *ancestor
 *  *decendant
 *
 *  Why Tree?
 *  1.store information hierarchy
 *  2.Better access/ search than link list
 *  3.Moderate Insertion deletion
 *  4.No upper limit
 *
 *  sorted list, digital image visul effect, routing algorithm, decision making
 *
 *  Binary Tree:
 *      Tree which has at most two children(left children and right children)
 *
 * create a tree like following
 *               1
 *            2      3
 *          4  5
 *
 * @return
 */

class Tree{
public:
    int data;
    Tree *left,*right;
    Tree(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }


};
int length = 0;
void printPre(Tree **tree){
    if(*tree == NULL)return ;
    length++;
    printf("data-> %d\n",(*tree)->data);
    printPre(&(*tree)->left);
    printPre(&(*tree)->right);
}
void printIn(Tree **tree){
    if(*tree == NULL)return ;
    printIn(&(*tree)->left);
    printf("data-> %d\n",(*tree)->data);
    printIn(&(*tree)->right);
}
void printPost(Tree **tree){
    if(*tree == NULL)return ;
    printPost(&(*tree)->left);
    printPost(&(*tree)->right);
    printf("data-> %d\n",(*tree)->data);
}
bool isIdentical(Tree *tree1, Tree *tree2){
    if(tree1 == NULL || tree2 == NULL) return true;
    else{
        return tree1->data == tree2->data && isIdentical(tree1->left,tree2->left) && isIdentical(tree1->right,tree2->right
        );//check are the data of a node same & at that time traverse left subtree & right subtree....
    }
}
int maxDepth(Tree *tree){
    if(tree== NULL) return 0;
    else{
        int leftDepth = maxDepth(tree->left);
        int rightDepth = maxDepth(tree->right);
        return max(leftDepth,rightDepth) + 1;
    }
}
void deleteTree(Tree *root){
    if(root == NULL) return ;
    deleteTree(root->left);
    deleteTree(root->right);
    free(root);
}
void deleteTree(Tree **root){
    deleteTree(*root);
    *root = NULL;
}


int main(){
    Tree *root = new Tree(1);

    Tree *child1 = new Tree(2);
    Tree *child2 = new Tree(3);
    Tree *child3 = new Tree(4);
    root->left = child1;
    root->right = child2;
    root->left->left = child3;
    root->left->right = new Tree(5);
    printf("Pre\n");
    printPre(&root);
//    printf("In\n");
//    printIn(&root);
//    printf("Post\n");
//    printPost(&root);

    printf("Length: - %d\n",length);
    printf("isIdentical -- >");

    Tree *tempTree = new Tree(2);
    cout  <<  isIdentical(root,tempTree) << endl;

    //deleteTree(&root);
    printf("Depth -> %d\n",maxDepth(root));


    return 0;
}