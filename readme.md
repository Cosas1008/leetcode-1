# Leetcode Questions
## 1. Two Sum  
Given an array of integers, return indices of the two numbers such that they add up to a specific target.  
You may assume that each input would have exactly one solution.  
## 2. Add Two Numbers
You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit.   Add the two numbers and return it as a linked list.
## 3. Longest Substring Without Repeating Characters
Given a string, find the length of the longest substring without repeating characters.
## 4. Median of Two Sorted Arrays
There are two sorted arrays nums1 and nums2 of size m and n respectively.  
Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)). 
## 5. Longest Palindromic Substring
Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.
## 6. ZigZag Conversion
## 7. Reverse Integer
Reverse digits of an integer.  
## 8. String to Integer (atoi)
Implement atoi to convert a string to an integer.  
Hint: Carefully consider all possible input cases. If you want a challenge, please do not see below and ask yourself what are the possible input cases.  
## 9. Palindrome Number
Determine whether an integer is a palindrome. Do this without extra space.  
*Should ask if negative number is valid
## 10. Regular Expression Matching
Implement regular expression matching with support for '.' and '*'.  
'.' Matches any single character.  
'*' Matches zero or more of the preceding element.  
## 11. Container With Most Water
Given n non-negative integers a1, a2, ..., an, where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.
## 13. Roman to Integer
Given a roman numeral, convert it to an integer.  
Input is guaranteed to be within the range from 1 to 3999.  
## 14. Longest Common Prefix
Write a function to find the longest common prefix string amongst an array of strings.  
## 15. 3Sum
Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.  
Note: The solution set must not contain duplicate triplets.
## 16. 3Sum Closest
Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. Return the sum of the three integers. You may assume that each input would have exactly one solution.  
    For example, given array S = {-1 2 1 -4}, and target = 1.  
    The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).  
## 17. Letter Combinations of a Phone Number
Given a digit string, return all possible letter combinations that the number could represent.  
A mapping of digit to letters (just like on the telephone buttons) is given below.  
## 18. 4Sum ***
Given an array S of n integers, are there elements a, b, c, and d in S such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.  
Note: The solution set must not contain duplicate quadruplets.  
## 19. Remove Nth Node From End of List
Given a linked list, remove the nth node from the end of list and return its head.  
For example,  
   Given linked list: 1->2->3->4->5, and n = 2.  
   After removing the second node from the end, the linked list becomes 1->2->3->5.  
## 20. Valid Parentheses
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.  
The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.  
## 21. Merge Two Sorted Lists
Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
## 22. Generate Parentheses
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
## 24. Swap Nodes in Pairs
Given a linked list, swap every two adjacent nodes and return its head.  
For example,  
Given 1->2->3->4, you should return the list as 2->1->4->3.  
Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.  
## 25. Reverse Nodes in k-Group
Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.  
If the number of nodes is not a multiple of k then left-out nodes in the end should remain as it is.  
You may not alter the values in the nodes, only nodes itself may be changed.  
Only constant memory is allowed.  
## 26. Remove Duplicates from Sorted Array
Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.  
Do not allocate extra space for another array, you must do this in place with constant memory.  
For example,  
Given input array nums = [1,1,2],  
Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.  
## 33. Search in Rotated Sorted Array  
Suppose a sorted array is rotated at some pivot unknown to you beforehand.  
(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).  
You are given a target value to search. If found in the array return its index, otherwise return -1.  
You may assume no duplicate exists in the array.
## 50. Pow(x, n)
Implement pow(x, n).
## 55. Jump Game
Given an array of non-negative integers, you are initially positioned at the first index of the array.  
Each element in the array represents your maximum jump length at that position.  
Determine if you are able to reach the last index.
## 69. Sqrt(x)  
Implement int sqrt(int x).  
Compute and return the square root of x.
## 74. Search a 2D Matrix  
Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:
Integers in each row are sorted from left to right.  
The first integer of each row is greater than the last integer of the previous row.  
## 78. Subsets
Given a set of distinct integers, nums, return all possible subsets.  
Note: The solution set must not contain duplicate subsets.  
## 81. Search in Rotated Sorted Array II
Follow up for "Search in Rotated Sorted Array":  
What if duplicates are allowed?  
Would this affect the run-time complexity? How and why?  
Write a function to determine if a given target is in the array.
## 90. Subsets II
Given a collection of integers that might contain duplicates, nums, return all possible subsets.  
Note: The solution set must not contain duplicate subsets.  
## 113. Path Sum II
Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.
## 117. Populating Next Right Pointers in Each Node II
Follow up for problem "Populating Next Right Pointers in Each Node".  
What if the given tree could be any binary tree? Would your previous solution still work?  
## 122. Best Time to Buy and Sell Stock II
Say you have an array for which the ith element is the price of a given stock on day i.  
Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times). However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).  
## 139. Word Break
Given a string s and a dictionary of words dict, determine if s can be segmented into a space-separated sequence of one or more dictionary words.  
For example, given  
s = "leetcode",  
dict = ["leet", "code"].  
Return true because "leetcode" can be segmented as "leet code".  
## 153. Find Minimum in Rotated Sorted Array
Suppose a sorted array is rotated at some pivot unknown to you beforehand.  
(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).  
Find the minimum element.  
You may assume no duplicate exists in the array.  
## 154. Find Minimum in Rotated Sorted Array II
Follow up for "Find Minimum in Rotated Sorted Array":  
What if duplicates are allowed?  
Would this affect the run-time complexity? How and why?  
## 167. Two Sum II - Input array is sorted
Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.  
The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.  
You may assume that each input would have exactly one solution.
## 170. Two Sum III - Data structure design
Design and implement a TwoSum class. It should support the following operations: add and find.  
add - Add the number to an internal data structure.  
find - Find if there exists any pair of numbers which sum is equal to the value.  
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
## 264. Ugly Number II
Write a program to find the n-th ugly number.  
Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. For example, 1, 2, 3, 4, 5, 6, 8, 9, 10, 12 is the sequence of the first 10 ugly numbers.  
Note that 1 is typically treated as an ugly number.  
## 268. Missing Number
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.  
For example,  
Given nums = [0, 1, 3] return 2.  
## 270. Closest Binary Search Tree Value
Given a non-empty binary search tree and a target value, find the value in the BST that is closest to the target.  
## 274. H-Index
Given an array of citations (each citation is a non-negative integer) of a researcher, write a function to compute the researcher's h-index.  
According to the definition of h-index on Wikipedia: "A scientist has index h if h of his/her N papers have at least h citations each, and the other N − h papers have no more than h citations each."  
For example, given citations = [3, 0, 6, 1, 5], which means the researcher has 5 papers in total and each of them had received 3, 0, 6, 1, 5 citations respectively. Since the researcher has 3 papers with at least 3 citations each and the remaining two with no more than 3 citations each, his h-index is 3.  
Note: If there are several possible values for h, the maximum one is taken as the h-index.
## 275. H-Index II
Follow up for H-Index: What if the citations array is sorted in ascending order? Could you optimize your algorithm?  
## 292. Nim Game
You are playing the following Nim Game with your friend: There is a heap of stones on the table, each time one of you take turns to remove 1 to 3 stones. The one who removes the last stone will be the winner. You will take the first turn to remove the stones.  
Both of you are very clever and have optimal strategies for the game. Write a function to determine whether you can win the game given the number of stones in the heap.  
For example, if there are 4 stones in the heap, then you will never win the game: no matter 1, 2, or 3 stones you remove, the last stone will always be removed by your friend.
## 300. Longest Increasing Subsequence ***
Given an unsorted array of integers, find the length of longest increasing subsequence.  
For example,  
Given [10, 9, 2, 5, 3, 7, 101, 18],  
The longest increasing subsequence is [2, 3, 7, 101], therefore the length is 4.Note that there may be more than one LIS combination, it is only necessary for you to return the length.  
Your algorithm should run in O(n2) complexity.  
Follow up: Could you improve it to O(n log n) time complexity?
## 313. Super Ugly Number
Write a program to find the nth super ugly number.  
Super ugly numbers are positive numbers whose all prime factors are in the given prime list primes of size k. For example, [1, 2, 4, 7, 8, 13, 14, 16, 19, 26, 28, 32] is the sequence of the first 12 super ugly numbers given primes = [2, 7, 13, 19] of size 4.  
## 344. Reverse String
Write a function that takes a string as input and returns the string reversed.  
## 367. Valid Perfect Square
Given a positive integer num, write a function which returns True if num is a perfect square else False.  
Note: Do not use any built-in library function such as sqrt.
## 371. Sum of Two Integers
Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -. 
## 376. Wiggle Subsequence
A sequence of numbers is called a wiggle sequence if the differences between successive numbers strictly alternate between positive and negative. The first difference (if one exists) may be either positive or negative. A sequence with fewer than two elements is trivially a wiggle sequence.  
For example, [1,7,4,9,2,5] is a wiggle sequence because the differences (6,-3,5,-7,3) are alternately positive and negative. In contrast, [1,4,7,2,5] and [1,7,4,5,5] are not wiggle sequences, the first because its first two differences are positive and the second because its last difference is zero.  
Given a sequence of integers, return the length of the longest subsequence that is a wiggle sequence. A subsequence is obtained by deleting some number of elements (eventually, also zero) from the original sequence, leaving the remaining elements in their original order.  
## 378. Kth Smallest Element in a Sorted Matrix
Given a n x n matrix where each of the rows and columns are sorted in ascending order, find the kth smallest element in the matrix.  
Note that it is the kth smallest element in the sorted order, not the kth distinct element.  
## 392. Is Subsequence
Given a string s and a string t, check if s is subsequence of t.  
You may assume that there is only lower case English letters in both s and t. t is potentially a very long (length ~= 500,000) string, and s is a short string (<=100).  
A subsequence of a string is a new string which is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (ie, "ace" is a subsequence of "abcde" while "aec" is not).  
## 406. Queue Reconstruction by Height
Suppose you have a random list of people standing in a queue. Each person is described by a pair of integers (h, k), where h is the height of the person and k is the number of people in front of this person who have a height greater than or equal to h. Write an algorithm to reconstruct the queue.
## 409. Longest Palindrome
Given a string which consists of lowercase or uppercase letters, find the length of the longest palindromes that can be built with those letters.  
This is case sensitive, for example "Aa" is not considered a palindrome here.  
## 438. Find All Anagrams in a String
Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.  
Strings consists of lowercase English letters only and the length of both strings s and p will not be larger than 20,100.  
The order of output does not matter.   
## 441. Arranging Coins
You have a total of n coins that you want to form in a staircase shape, where every k-th row must have exactly k coins.  
Given n, find the total number of full staircase rows that can be formed.  
n is a non-negative integer and fits within the range of a 32-bit signed integer.  
## 442. Find All Duplicates in an Array
Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.  
Find all the elements that appear twice in this array.  
Could you do it without extra space and in O(n) runtime?
## 448. Find All Numbers Disappeared in an Array
Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.  
Find all the elements of [1, n] inclusive that do not appear in this array.  
Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.
## 451. Sort Characters By Frequency
Given a string, sort it in decreasing order based on the frequency of characters.
## 454. 4Sum II
Given four lists A, B, C, D of integer values, compute how many tuples (i, j, k, l) there are such that A[i] + B[j] + C[k] + D[l] is zero.  
To make problem a bit easier, all A, B, C, D have same length of N where 0 ≤ N ≤ 500. All integers are in the range of -228 to 228 - 1 and the result is guaranteed to be at most 231 - 1.  
## 339. Nested List Weight Sum
Given a nested list of integers, return the sum of all integers in the list weighted by their depth.  
Each element is either an integer, or a list -- whose elements may also be integers or other lists.  
## 364. Nested List Weight Sum II
Given a nested list of integers, return the sum of all integers in the list weighted by their depth.  
Each element is either an integer, or a list -- whose elements may also be integers or other lists.  
Different from the previous question where weight is increasing from root to leaf, now the weight is defined from bottom up. i.e., the leaf level integers have weight 1, and the root level integers have the largest weight.  
## 199. Binary Tree Right Side View
Given a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.
## 359. Logger Rate Limiter
Design a logger system that receive stream of messages along with its timestamps, each message should be printed if and only if it is not printed in the last 10 seconds.  
Given a message and a timestamp (in seconds granularity), return true if the message should be printed in the given timestamp, otherwise returns false.
