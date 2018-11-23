#####Design and Implementation
1. Implement Queue using Stack 
2. Implement stack which has getMin(), findMiddle(), deleteMiddle(),merge(Stack s1,Stack s2) method in O(1)
3. Implement two stacks in an array
4. Implement stack using queue
5. Implement k stacks in an array  
6. Implement stack using priority queue or heap
7. Implement stack and queue using deque


#####Standard Problems
8. Infix to postfix
9. Prefix to Infix
10. Prefix to Postfix
11. Postfix to Prefix
12. Stock Span Problem*
13. Check for balanced parentheses in an expression
14. Find next greater element
15. Find next greater frequency element
16. Number of NGEs to the right*
17. The Celebrity Problem - HaveAcquaintance(A, B) which returns true if A knows B, false otherwise.
18. Expression Evaluation
19. TOH
20. Print next greater number of Q queries in an array 
    ``` 
    Input : arr[] = {3, 4, 2, 7, 5, 8, 10, 6} 
            query indexes = {3, 6, 1}
    Output: 8 -1 7 
    Explanation : 
    For the 1st query index is 3, element is 7 and the next greater element at its right is 8 
    For the 2nd query index is 6, element is 10 and  there is no element greater then 10 at right,so print -1.
    For the 3rd query index is 1, element is 4 and the next greater element at its right is 7.
    ```
#####Operations on Stack
21. reverse stack using recursion
22. sort a stack using recursion
23. sort stack using temporary stack
24. reverse a stack without using extra space in O(n)
25. sorting array using stack
26. delete array elements which are smaller than next or become smaller
    ``` 
    Input:{20,10,25,30,40}
    Output:{25,30,40} (dynamic)
    ```
27. check if a queue can be sorted int another queue using stack
28. reverse individual words
    ```
    Input: Hello World
    Output:olleH dlroW
    ```
29. Check if an array is stack sortable. 

#####Misc
30. Merge overlapping interval
    ```
    {{1,3}, {2,4}, {5,7}, {6,8} }. The intervals {1,3} and {2,4} overlap with each other, so they should be merged and become {1, 4}. Similarly {5, 7} and {6, 8} should be merged and become {5, 8}
    ```
31. largest rectangular area in a histogram
32. print ancestors of a given binary tree without recursion
33. find maximum depth of nested parenthesis in a string 
34. find maximum of minimum for every window size in a given array
35. length of longest valid substring
    ```
    Input:  ()(()))))
    Output: 6
    Explanation:  ()(())
    ```
36. Iterative Depth First Traversal of Graph
37. Minimum number of bracket reversal needed to make an expression balanced
    ```
    Input:  exp = "}{{}}{{{"
    Output: 3
    ```
38. Expression contains redundant bracket or not
    ``` 
    Input: (a+(b)/c)
    Output: Yes (because b is surrounded by ()) 
    
    Input: (a+b*(c-d))
    Output: No
    ```
39. Identify and marked unmatched parenthesis in an expression. closing as 1 opening as 0 and unbalanced as -1. 
40. Check if two expressions with brackets are same
    ```
    Input  : exp1 = "-(a+b+c)"
             exp2 = "-a-b-c"
    Output : Yes
    
    Input  : exp1 = "-(c+b+a)"
             exp2 = "-c-b-a"
    Output : Yes
    ```
41. Find index of closing bracket for a given opening bracket in an expression
    ```
    Input:  [ABC[23]][89]
    Output: 8
    ```
42. Check for balance parentheses in an expression
    ```
    Input:  “[()]{}{[()()]()}” 
    Output: true
    ```
43. Some places there is ‘X’ in place of any bracket. Determine whether by replacing all ‘X’s with appropriate bracket, is it possible to make a valid bracket sequence.
    ```
       Input:  "{(X[X])}"
       Output: balanced, {([[]])}.
       Input: [{X}(X)]
       Output: Not balanced
    ```
44. Check if given array can be represented preorder traversal of binary search tree. 
    ```
    Input:{2, 4, 3}
    Output:true   
    2
      4
     /
    3
    
    Input: {40, 30, 35, 20, 80, 100}
    Output: false
    ```
42. form minimum number from given sequence(*)
43. find if an expression has duplicate parenthesis or not 
    ```
    ((a+b)+((c+d)))
    The subexpression "c+d" is surrounded by two
    pairs of brackets.
    
    ((a+b)+(c+d)) 
    No subsexpression is surrounded by duplicate
    brackets.
    ```
44. Find next smaller of next greater in an array 
    ```
    Input : arr[] = {5, 1, 9, 2, 5, 1, 7}
    Output:          2  2 -1  1 -1 -1 -1
    Explanation :  
    Next Greater ->      Right Smaller 
       5 ->  9             9 ->  2 
       1 ->  9             9 ->  2
       9 -> -1            -1 -> -1
       2 ->  5             5 ->  1
       5 ->  7             7 -> -1
       1 ->  7             7 -> -1
       7 -> -1            -1 -> -1 
    
    Input  : arr[] = {4, 8, 2, 1, 9, 5, 6, 3}
    Output :          2  5  5  5 -1  3 -1 -1 
    ```
45. Find maximum sum possible equal sum of three stacks. 
    ```
        https://www.geeksforgeeks.org/wp-content/uploads/Find-maximum-sum-possible-equal-sum-of-three-stacks-2.png
    ```
46. from list of consecutive words if two consecutive words are same then destroy them and return the size. 

    ``` 
    Input : ab aa aa bcd ab
    Output : 3
    As aa, aa destroys each other so, ab bcd ab is the
    new sequence.
    
    Input :  tom jerry jerry tom
    Output : 0
    ```  
47. Decode string recursively encoded as count followed by substring
    ``` 
    Input : str[] = "1[b]"
    Output : b
    
    Input : str[] = "2[ab]"
    Output : abab
    
    Input : str[] = "2[a2[b]]"
    Output : abbabb
    
    Input : str[] = "3[b2[ca]]"
    Output : bcacabcacabcaca
    
    ```
48. Bubble sort using two stacks
49. Pattern Occurrences : Stack Implementation 
    ``` 
    Input : 
    Pattern : ABC
    Text : ABABCABCC
    Output :
    3
    Occurrences found at: 
    4 7 8
    Explanation
    Occurrences and their removal in the order
    1. ABABCABCC
    2. ABABCC
    3. ABC
    ```
50. find ancestors of a given binary tree
    ``` 
    Input : 
                1
            /       \
           2         7
         /   \     /   \
        3     5    8    9 
       /       \       /
      4         6     10 
    Key = 6 
    
    Output : 5 2 1
    Ancestors of 6 are 5, 2 and 1.
    ```
51. Tracking current Maximum Element in a Stack
    ``` 
    Input : 4 19 7 14 20
    Output : Max Values in stack are 
             4 19 19 19 20
    
    Input : 40 19 7 14 20 5
    Output :  Max Values in stack are 
             40 40 40 40 40 40
    ```
    
52. Check two n-array trees are mirror or not
53. Reverse a number using stack
54. reverse first k elements in a queue. 
55. reversing a queue
56. check if stack elements are pairwise consecutive
    ``` 
    Input : stack = [4, 5, -2, -3, 11, 10, 5, 6, 20]
    Output : Yes
    Each of the pairs (4, 5), (-2, -3), (11, 10) and
    (5, 6) consists of consecutive numbers.
    
    Input : stack = [4, 6, 6, 7, 4, 3]
    Output : No
    (4, 6) are not consecutive.
    
    ```
57. A spaghetti stack is an N-ary tree data structure in which child nodes have pointers to the parent nodes (but not vice-versa)
58. Interleave the first half of the queue with second half
    ``` 
    Input :  1 2 3 4
    Output : 1 3 2 4
    
    Input : 11 12 13 14 15 16 17 18 19 20
    Output : 11 16 12 17 13 18 14 19 15 20
    ```
59. remove brackets from an algebric string containing + & - operation 
    ``` 
    Input : "a-(b+c)"
    Output : "a-b-c"
    
    Input : "a-(b-c-(d+e))-f"
    Output : "a-b+c+d+e-f" 
    ```
60. an implementation of stack is considered its size is pre-determined or fixed. Even though it is dynamically allocated, still once it is made its size cannot be changed. And hence a condition called “stack full” arises.

        https://cdncontribute.geeksforgeeks.org/wp-content/uploads/growable-stack.png

61. Range queries for longest correct bracket subsequence 
      ``` 
      Input : S = ())(())(())(
              Start Index of Range = 0, 
              End Index of Range = 11
      Output : 10
      Explanation:  Longest Correct Bracket Subsequence is ()(())(())
      
      Input : S = ())(())(())(
              Start Index of Range = 1, 
              End Index of Range = 2
      Output : 0
      ```
62. Stack Permutations (Check if an array is stack permutation of other) (*)
