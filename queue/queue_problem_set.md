##### Implementation 

1. Implement queue using stack
2. LRU Cache Implementation 
3. Implement stack using queue
4. Implement queue using linked list
5. Implement k queues in a single array
6. Implement stack using single queue
7. Implement deque using circular array
8. Implement circular queue with linked list
9. Implement stack and queue using deque 
10. Implement priority queue using linked list
10. Implement priority queue using doubly linked list
11. Implement deque using doubly link list

####Implementation
1. queue
    - stack
    - linked list
    - deque
2. k queues
    - single array
3. deque
    - circular array
    - doubly link list
    
4. priority queue 
    - linked list
    - doubly linked list
    
5. stack
    - queue
    - deque
    
   

##### Standard Problem
1. Check if a queue can be sorted into another queue using a stack 
```
    Input : Queue[] = { 5, 1, 2, 3, 4 }
    Output : Yes
    Pop the first element of the given Queue i.e 5.
    Push 5 into the stack.
    Now, pop all the elements of the given Queue and push them to
    second Queue.
    Now, pop element 5 in the stack and push it to the second Queue.
``` 
2. BFS for a graph
3. Level Order tree traversal
4. Reverse path in BST*
5. Construct Complete BST with Linked List Representation
6. Page replacement algorithm*
7. Check whether a given binary tree is complete or not
8. zigzag tree traversal right -> left ->right ... 
9. Number of siblings of a given node in n-ary tree

##### Operations
1. Reverse a queue
2. Reverse a queue using recursion
3. Reverse first k elements of a queue
4. Interleave the first half of the queue with second half
5. Sorting a queue without using extra space

##### Misc
1. Maximum of all subarrays of size k( Sliding Window Maximum) 
``` 
    Input :
    arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6}
    k = 3
    Output :
    3 3 4 5 5 5 6
    
```
2. Find the largest multiple of 3 using queue 
3. Smallest multiple of a given number made of digits 0 & 9 only
4. Iterative method to find the height of a binary tree
5. Implement priority queue through comparator in java
6. print all binary number from 1 to n using queu e
7. find maximum level sum in binary tree
8. sum of minimum and maximum elements of all subarrays of size k. 
``` 
Input : arr[] = {2, 5, -1, 7, -3, -1, -2}  
        K = 4
Output : 18
Explanation : Subarrays of size 4 are : 
     {2, 5, -1, 7},   min + max = -1 + 7 = 6
     {5, -1, 7, -3},  min + max = -3 + 7 = 4      
     {-1, 7, -3, -1}, min + max = -3 + 7 = 4
     {7, -3, -1, -2}, min + max = -3 + 7 = 4   
     Sum of all min & max = 6 + 4 + 4 + 4 
                          = 18      

```
9. Distance of nearest cell having 1 in a binary matrix 
``` 
Input : N = 3, M = 4
        mat[][] = { 
                    0, 0, 0, 1,
                    0, 0, 1, 1,
                    0, 1, 1, 0 
                  }
Output : 3 2 1 0
         2 1 0 0
         1 0 0 1

For cell at (0, 0), nearest 1 is at (0, 3),
so distance = (0 - 0) + (3 - 0) = 3.
Similarly all the distance can be calculated.
```
10. Level Order traversal new line by new line  
11. First negative integer in every window of size k if not found print zero 
12. Minimum sum of square of character counts in a given string after removing k characters. ( PQ )
``` 
Input :  str = abccc, K = 1
Output :  6
We remove c to get the value as 11 + 11 + 22

Input :  str = aaab, K = 2
Output :  2
```
13. Average of levels in Binary Tree
14. Check if an array is stack permutation of other
15. Check if all levels of two trees are anagams or not
16. Check mirror in n-ary tree








































