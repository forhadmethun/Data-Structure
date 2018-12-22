### Introduction
 1. Introduction
 2. Properties
 3. Types of Binary Tree
 4. Tree Properties & Handshaking Lemma
 5. How many different (un)labeled binary tree can be there with n nodes
 6. Insertion in a Binary Tree
 7. Deletion in a Binary Tree
 8. BFS vs DFS for Binary Tree
 9. Array Implementation of Binary Tree
 10. AVL with duplicate keys
   - avl tree with count with every key
 11. Tree DS Application
 12. MST Application
 13. Check if Continuous tree
  - if root to leaf path, absolute difference between keys of two adjacent is 1 is called continuous tree
 14. Foldable Binary trees
  - if left and right subtree are structure wise mirror image of each other. empty tree is considered as foldable
 15. Postfix to infix with tree
 16. Evaluation of expression tree

### Traversals
1. Tree traversals(in, pre, post)
2. Inorder traversal without recursion
3. inorder traversal without recursion & without stack
4. print postorder traversal from given inorder and preorder traversals
5. Find postorder traversal of bst from preorder traversal
6. find all possible binary trees with given inorder traversal
7. replace each node in binary tree with the sum of its inorder predecessor and successor
8. populate inorder successor for all nodes
9. find n-th node of inorder traversal
10. find n-th node in postorder traversal of a binary tree
11. level order tree traversal
12. level order tree traversal line by line
13. level order traversal with direction change after every two levels
14. reverse level order traversal from bottom to top
15. reverse tree path*
16. binary tree traversal level order with specific criteria top to bottom
17. binary tree traversal level order with specific criteria bottom to top
18. Reverse alternate levels of a prefect binary tree
19. Morris traversal for Preorder*
20. Iterative Preorder traversal
21. Iterative Postorder traversal using two stacks
22. Iterative Postorder traversal using one stack
23. Postorder traversal without recursion & without stack
24. Diagonal traversal of a binary tree
    - right way diagonal
25. Iterative diagonal traversal of a binary tree
26. Boundary traversal of binary tree
27. find density = size/ height of a tree
28. calculate depth of a fully tree from preorder
29. number of binary tree from preorder sequence length
30. modify a binary tree to get preorder traversal using right pointer only 

### Construction and Conversions
1. Construct tree from given inorder and postorder traversal
2. construct tree from given inorder and level order traversal
3. construct binary tree from it's linked list representation
4. construct a complete binary tree from given array in level order fashion
5. construct a full binary tree from given preorder and postorder traversals
6. construct a full binary tree from its preorder traversal and preorder traversal of its mirror tree
7. construct a special tree from given preorder traversal
    ``` 
    Input:  pre[] = {10, 30, 20, 5, 15},  preLN[] = {'N', 'N', 'L', 'L', 'L'}
    Output: Root of following tree
              10
             /  \
            30   15
           /  \
          20   5
    N-> non leaf node
    L-> leaf node
    ```
8. Construct tree from ancestor matrix
    ```
     mat[i][j] = 1 if i is ancestor of j
     mat[i][j] = 0, otherwise 
     
     
     
     Input: 0 1 1
            0 0 0 
            0 0 0 
     Output: Root of one of the below trees.
         0                0
       /   \     OR     /   \
      1     2          2     1
     
     Input: 0 0 0 0 0 0 
            1 0 0 0 1 0 
            0 0 0 1 0 0 
            0 0 0 0 0 0 
            0 0 0 0 0 0 
            1 1 1 1 1 0
     Output: Root of one of the below trees.
           5              5               5
        /    \           / \            /   \
       1      2   OR    2   1    OR    1     2  OR ....
      /  \   /        /    /  \       / \    /
     0   4  3        3    0    4     4   0  3
     There are different possible outputs because ancestor
     matrix doesn't store that which child is left and which
     is right.
     
    ```
9. Construct ancestor matrix from a given binary tree
10. Given inorder traversal of a Special Binay Tree in which key of every node is greater than keys in left and right children, construct the Binary Tree and return 
    ``` 
    Input: inorder[] = {5, 10, 40, 30, 28}
    Output: root of following tree
             40
           /   \
          10     30
         /         \
        5          28 
    
    Input: inorder[] = {1, 5, 10, 40, 30, 
                        15, 28, 20}
    Output: root of following tree
              40
            /   \
           10     30
          /         \
         5          28
        /          /  \
       1         15    20
    
    ```
 
11.  Construct binary tree from given parent array representation
 ``` 
          Input: parent[] = {1, 5, 5, 2, 2, -1, 3}
         Output: root of below tree
                   5
                 /  \
                1    2
               /    / \
              0    3   4
                  /
                 6 
         Explanation: 
         Index of -1 is 5.  So 5 is root.  
         5 is present at indexes 1 and 2.  So 1 and 2 are
         children of 5.  
         1 is present at index 0, so 0 is child of 1.
         2 is present at indexes 3 and 4.  So 3 and 4 are
         children of 2.  
         3 is present at index 6, so 6 is child of 3.
         
         Input: parent[] = {-1, 0, 0, 1, 1, 3, 5};
         Output: root of below tree
                  0
                /   \
               1     2
              / \
             3   4
            /
           5 
          /
         6
 ``` 
12. Construct a Binay Tree from Postorder and Inorder
13. Create a Doubly Linked List from ternary Tree
14. Creating a tree with left-child right-sibling representation*
15. prufer code to tree creation*
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 