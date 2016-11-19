# Leetcode Questions
## 69. Sqrt(x)  
Implement int sqrt(int x).  
Compute and return the square root of x.
## 74. Search a 2D Matrix  
Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:
Integers in each row are sorted from left to right.  
The first integer of each row is greater than the last integer of the previous row.  
## 33. Search in Rotated Sorted Array  
Suppose a sorted array is rotated at some pivot unknown to you beforehand.  
(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).  
You are given a target value to search. If found in the array return its index, otherwise return -1.  
You may assume no duplicate exists in the array.
## 153. Find Minimum in Rotated Sorted Array
Suppose a sorted array is rotated at some pivot unknown to you beforehand.  
(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).  
Find the minimum element.  
You may assume no duplicate exists in the array.  
## 81. Search in Rotated Sorted Array II
Follow up for "Search in Rotated Sorted Array":  
What if duplicates are allowed?  
Would this affect the run-time complexity? How and why?  
Write a function to determine if a given target is in the array.
## 367. Valid Perfect Square
Given a positive integer num, write a function which returns True if num is a perfect square else False.  
Note: Do not use any built-in library function such as sqrt.
## 167. Two Sum II - Input array is sorted
Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.  
The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.  
You may assume that each input would have exactly one solution.
## 300. Longest Increasing Subsequence ***
Given an unsorted array of integers, find the length of longest increasing subsequence.  
For example,  
Given [10, 9, 2, 5, 3, 7, 101, 18],  
The longest increasing subsequence is [2, 3, 7, 101], therefore the length is 4.Note that there may be more than one LIS combination, it is only necessary for you to return the length.  
Your algorithm should run in O(n2) complexity.  
Follow up: Could you improve it to O(n log n) time complexity?
## 209. Minimum Size Subarray Sum
Given an array of n positive integers and a positive integer s, find the minimal length of a subarray of which the sum ≥ s. If there isn't one, return 0 instead.
## 222. Count Complete Tree Nodes
Given a complete binary tree, count the number of nodes.  
Definition of a complete binary tree from Wikipedia:  
In a complete binary tree every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible. It can have between 1 and 2h nodes inclusive at the last level h.
## 240. Search a 2D Matrix II
Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:  
Integers in each row are sorted in ascending from left to right.  
Integers in each column are sorted in ascending from top to bottom.  
## 154. Find Minimum in Rotated Sorted Array II
Follow up for "Find Minimum in Rotated Sorted Array":  
What if duplicates are allowed?  
Would this affect the run-time complexity? How and why?  
## 451. Sort Characters By Frequency
Given a string, sort it in decreasing order based on the frequency of characters.
## 1. Two Sum  
Given an array of integers, return indices of the two numbers such that they add up to a specific target.  
You may assume that each input would have exactly one solution.  
## 7. Reverse Integer
Reverse digits of an integer.  
## 6. ZigZag Conversion
## 8. String to Integer (atoi)
Implement atoi to convert a string to an integer.  
Hint: Carefully consider all possible input cases. If you want a challenge, please do not see below and ask yourself what are the possible input cases.  
## 9. Palindrome Number
Determine whether an integer is a palindrome. Do this without extra space.  
*Should ask if negative number is valid
## 14. Longest Common Prefix
Write a function to find the longest common prefix string amongst an array of strings.  
## 292. Nim Game
You are playing the following Nim Game with your friend: There is a heap of stones on the table, each time one of you take turns to remove 1 to 3 stones. The one who removes the last stone will be the winner. You will take the first turn to remove the stones.  
Both of you are very clever and have optimal strategies for the game. Write a function to determine whether you can win the game given the number of stones in the heap.  
For example, if there are 4 stones in the heap, then you will never win the game: no matter 1, 2, or 3 stones you remove, the last stone will always be removed by your friend.
## 344. Reverse String
Write a function that takes a string as input and returns the string reversed.  
## 2. Add Two Numbers
You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit.   Add the two numbers and return it as a linked list.
## 371. Sum of Two Integers
Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -. 
## 4. Median of Two Sorted Arrays
There are two sorted arrays nums1 and nums2 of size m and n respectively.  
Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)). 
## 78. Subsets
Given a set of distinct integers, nums, return all possible subsets.  
Note: The solution set must not contain duplicate subsets.  
## 90. Subsets II
Given a collection of integers that might contain duplicates, nums, return all possible subsets.  
Note: The solution set must not contain duplicate subsets.  
## 442. Find All Duplicates in an Array
Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.  
Find all the elements that appear twice in this array.  
Could you do it without extra space and in O(n) runtime?
## 448. Find All Numbers Disappeared in an Array
Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.  
Find all the elements of [1, n] inclusive that do not appear in this array.  
Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.
## 268. Missing Number
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.  
For example,  
Given nums = [0, 1, 3] return 2.  
## 117. Populating Next Right Pointers in Each Node II
Follow up for problem "Populating Next Right Pointers in Each Node".  
What if the given tree could be any binary tree? Would your previous solution still work?  
## 274. H-Index
Given an array of citations (each citation is a non-negative integer) of a researcher, write a function to compute the researcher's h-index.  
According to the definition of h-index on Wikipedia: "A scientist has index h if h of his/her N papers have at least h citations each, and the other N − h papers have no more than h citations each."  
For example, given citations = [3, 0, 6, 1, 5], which means the researcher has 5 papers in total and each of them had received 3, 0, 6, 1, 5 citations respectively. Since the researcher has 3 papers with at least 3 citations each and the remaining two with no more than 3 citations each, his h-index is 3.  
Note: If there are several possible values for h, the maximum one is taken as the h-index.
## 275. H-Index II
Follow up for H-Index: What if the citations array is sorted in ascending order? Could you optimize your algorithm?  
## 270. Closest Binary Search Tree Value
Given a non-empty binary search tree and a target value, find the value in the BST that is closest to the target.  
## 441. Arranging Coins
You have a total of n coins that you want to form in a staircase shape, where every k-th row must have exactly k coins.  
Given n, find the total number of full staircase rows that can be formed.  
n is a non-negative integer and fits within the range of a 32-bit signed integer.  
## 454. 4Sum II
Given four lists A, B, C, D of integer values, compute how many tuples (i, j, k, l) there are such that A[i] + B[j] + C[k] + D[l] is zero.  
To make problem a bit easier, all A, B, C, D have same length of N where 0 ≤ N ≤ 500. All integers are in the range of -228 to 228 - 1 and the result is guaranteed to be at most 231 - 1.  
## 170. Two Sum III - Data structure design
Design and implement a TwoSum class. It should support the following operations: add and find.  
add - Add the number to an internal data structure.  
find - Find if there exists any pair of numbers which sum is equal to the value.  
## 15. 3Sum
Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.  
Note: The solution set must not contain duplicate triplets.
## 18. 4Sum ***
Given an array S of n integers, are there elements a, b, c, and d in S such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.  
Note: The solution set must not contain duplicate quadruplets.  
## 113. Path Sum II
Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.
