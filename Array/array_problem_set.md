##### Rotation
1. rotate array  
  a. right rotate  
  b. left rotate
  
2. cyclically rotate an array by one
3. search an element in a sorted and rotated array in `O(logn)`
4. in a sorted and rotated array find if there is a pair with a given sum
5. find maximum value of sum (i*arr[i]) with only rotation on given array allowed
6. find the rotation count in rotated sorted array
7. find the minimum element in a sorted and rotated array
8. find a rotation with maximum hamming distance 
   - Given an array of n elements, create a new array which is a rotation of given array and hamming distance (# of positions at which corresponding elements are different) between both the array is maximum
##### rearrangement
9. split the array and first part to the end
10. rearrange an array such that arr[i] = i 
    - if i not present display -1 at that place 
11. write a program to reverse an array 
12. rearrange array such that arr[i]>=arr[j] if i is even and arr[i]<=arr[j] if i is odd and j<i
13. rearrange array in alternating positive and negative items with O(1) extra space
14. move all zeros to the end of array
15. minimum swap required to bring all elements less than or equal to k together
16. rearrange an array in order- smallest, largest, 2nd smallest, 2nd largest, ...
17. if next valid number is same as current then double the current value and replace next value with 0 and move all zero to the end
18. reorder an array according to given indexes
19. rearrange positive and negative numbers with constant extra space
20. rearrange an array such that arr[j] becomes i
21. arrange given numbers to form the biggest number 
22. replace every array element by multiplication of previous and next
    - first element with first and second & last element with last and 2nd last
23. segregate even and odd number in the array
##### Order
24. Find the k'th largest element in an array (heap)
25. Find the largest three elements in an array
26. Given an n*n matrix, where row and column are sorted in non-decreasing order. Find the kth smallest element in the given 2D array.
27. mean and median of an unsorted array
28. find median of all elements read so far starting from the first integer till last integer
29. minimum product of k integers in an array of positive integers ( priority queue )
30. k-th largest sum of contiguous subarray within the array of numbers which has negative and positive numbers
31. k pairs maximum/minimum sum combinations from two arrays
32. k maximum sums of  contiguous sub-arrays (find - sum & index)
    - overlapping
    - non-overlapping ( kadane's algo )
         - find out k sub-arrays which have k maximum sums.
33. find k smallest elements in same order using O(1) extra space 
34. k-th smallest absolute difference of two elements in an array 
35. second (k)smallest/largest element of an array 
36. find k numbers with most occurrences in the given array 
37. find the smallest missing number from 0 to m-1 and m>n
38. maximum sum such that no two elements are adjacent
39. maximum and minimum of an array using minimum number of comparison
##### Range 
40. An array and set of query ranges given, need to find the sum of every query range (MO's Algorithm / square root decomposition / Sparse Table)
41. range minimum query 
42. range query for frequency of array elements ( unordered_map )
43. constant time range add operation on an array
    - given array of N initially contains 0. many range add query given. need to find the final result.
44. range lcm query
45. range gcd query 
46. gcd of all numbers except elements given in a range
47. number of elements less than or equal to given number in a range ( BIT )
48. query for counts of array elements with values in given range
49. a binary array given need to find the decimal value of a range
50. count elements which divide all numbers in range L - R
51. find 0<=x<=2^31 where sum of x-or of x with numbers within the range range is max possible (bit magic) 
52. find xor sum of numbers which appeared even # of times within a range
53. array range query for searching an element
54. maximum occurrence in given range
55. find k'th smallest number in a range in an array
56. total no repeated digits in a number range
57. range update query in a range

##### Optimization
58. largest sum contiguous sub-array (kadane)
59. maximum profit by buying and selling product twice
60. find sub-array of k length with minimum average
70. find minimum distance between number x and y in an array
    ```
    Input: arr[] = { 3,4,5}, x = 3, y = 5
    Output: 2
    ```
71. Minimize the maximum difference between heights
    ```
    Input: arr[] = {1,15,10}, k = 6
    Output: 5 // 1+6-> 7, 15-6 -> 9, 10-6 -> 4 =>max-diff(7,9,4)=>5
    ```
81. Each elements of an array represent max jump number from that element, find minimum number of jumps to reach the end of the array. 
    ``` 
    Input: arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
    Output: 3(1->3->8->9)
    ```
82. Maximum Sum Increasing Subsequence (standard variation of LIS)
    ``` 
    Input1:{1,101,2,3,100,4,5}
    Output1:106(1+2+3+100)
    Input2:{3,4,5,10}
    Output2:22(3+4+5+10)
    Input3:{10,5,3,2}
    Output3: 10
    ```
83. Smallest sub-array with sum greater than a given value
    ``` 
    Input: arr[] = {1,4,45,6,0,19}, x = 51
    Output: 3 (4,45,6)
    ```
84. Find maximum average sub-array of k length
    ``` 
    Input: arr[] = {1,12,-5,-6,50,3}, k = 4
    Output: 51/4   = (12-5-6+50)/4
    ```
85. Count minimum steps to get the given desired array from array which contains zero(increment by 1 or double all value allowed)
    ``` 
    Input: {2,3}
    Output: 4 (1st incre both, 2nd double, 3rd incre 2nd element)
    ```
86. Number of subsets with product less than or equal to k 
    ``` 
    Input: arr[] = {2,4,5,3}, k = 12
    Output: 8 ({2},{4},{5},{3},{2,4},{2,5},{2,3},{4,3})
    ```
87. Minimum number of merge operations to make an array palindrome. merging elements means replace them with their sum
    ```
    Input: arr[] = {1,4,5,1}
    Output: 1 (merge 4,5 make 9)
    ```
88. Find smallest positive integer value that cannot be represented as sum of subset of a given sorted array
    ````
    Input: arr[] = {1,3,6,10,11,15}
    Output: 2
    ````
89. Find minimum difference between two elements 
    ``` 
    Input: arr[] = {1,5,3,19,18,25}
    Output: 1 ( between 19,18)
    ```
90. Longest span with same sum in two binary arrays
    ``` 
    Input: {0, 1, 0, 0, 0, 0}
    Output: {1, 0, 1, 0, 0, 1}
    ```

##### Sorting
91. Alternative Sorting. Print an array in a way that first element is first maximum and second element is first minimum and so on
    ``` 
    Input: arr[] = {7,1,2,3,4,5,6}
    Output: {7,1,6,2,5,3,4}
    ```
92. Sort a nearly sorted array(k sorted array). Each element is at most k away from its target position, devise algorithm that sorts in O(nlogk) time. 
    ``` 
    Input: {6, 5, 3, 2, 8, 10, 9}, k = 3
    Output: {2, 3 , 5, 6, 8, 9 , 10}
    ```
92. Sort an array according to absolute difference with given value. 
    ``` 
    Input: x = 7, arr[] = {10, 5, 3, 9, 2}
    Output:{5,9,10,3,2}(7-5 = 2, 7-9 = 2, 7-10 = 3, 7-3 =4, 7-2 = 5)
    ```
93. Sort an array in wave form. arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= …..
    ``` 
    Input: {10, 5, 6, 3, 2, 20, 100, 80}
    Output: {10, 5, 6, 2, 20, 3, 100, 80} OR equivalent.
    ```
94. Merge an array of size n into another array of size m+n in sorted order
    ``` 
    Input: {2,8,13,15} & {5,7,9,25}
    Output: 2 5 7 8 9 13 15 20 25
    ```
95. Sort an array which contain 1 to n values
96. Sort 1 to N by swapping adjacent elements. another array given which contains boolean value indicates that A[i] can be swapped with A[i+1] or not.
    ``` 
    Input: {1, 2, 5, 3, 4, 6}
    Output:{0, 1, 1, 1, 0}
    ```
97. Sort an array containing two types of elements by traversing once 
    ``` 
    Input :  arr[] = [0, 1, 0, 1, 0, 0, 1, 1, 1, 0] 
    Output : arr[] = [0, 0, 0, 0, 0, 1, 1, 1, 1, 1] 
    ```
98. Sort elements by frequency
    ``` 
    Input:  arr[] = {2, 5, 2, 8, 5, 6, 8, 8}
    Output: arr[] = {8, 8, 8, 2, 2, 5, 5, 6}
    ```
99. Count Inversions in an array. Inversion count means how far(close) the array is from being sorted. If array is already sorted then inversion is minimum and reverse sorted then maximum. 
    ``` 
    Input:  2, 4, 1, 3, 5 
    Output: three inversions (2, 1), (4, 1), (4, 3)
    ```
100.

##### Searching
1. Search, insert and delete in 
    - unsorted array 
    - sorted array 
2. Given an array A[] and x, check for pair in A[] where sum equals to x
3. Search in an array where adjacent differ by at most k
4. Find common elements in three sorted array 
5. Find position of an element in a sorted array of infinite numbers
6. Find the only repetitive element between 1 to n-1
7. Find the element that appears once
8. Maximum subarray sum excluding certain elements
9. Maximum equilibrium sum(sum of elements of certain position in left side equal to the sum of other elements) in an array
10. Given an array arr[]. Find maximum value of prefix sum which is also suffix sum for index in in arr[]. 
11. Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. 
12. An element is leader if it is greater than all the elements to its right side. 
13. Finding ceiling in a sorted array where ceiling of x is the smallest in array greater than or equal to x and floor is th greatest element smaller than or equal to x.
14. Check for majority element in sorted array
    - if an array has majority element
15. Find peak element. An array element is peak if it is not smaller than its neighbors(only one neighbor)
16. Find two repeating elements in a given array. N+2 elements given where elements range 1 to n. 
17. Find a fixed point( value equal to index) in a given array if not found print -1
18. Find subarray with given sum
19. Maximum triplet sum in array
20. Smallest difference triplet from three arrays(*)
21. Find triplet/pair that sum to a given value
22. Find all triplets with zero sum
23. Find triplets with sum smaller than a given value
24. Print all triplets in sorted array 
25. Number of unique triplets whose XOR is zero
26. Find a triplet such that sum of two equals to third element
27. Find the number occurring odd number of times(*)
28. Find the missing number
29. Count number of occurrences(or frequency) in a sorted array
30. Count 1's in a sorted binary array. 

##### Matrix

##### Misc














































