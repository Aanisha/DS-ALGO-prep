# Finding Duplicates problem

Problem link : https://leetcode.com/problems/find-the-duplicate-number/

## The Different Approaches

### 1. Sorting and comparing indexes
      
      Time Complexity : O(n log n) => Provided using merge sort Quicksort
      Space Complexity : O(1)
      
### 2. Hashing and checking in the same loop

      Checking if freq. of one element, is already more than one, then breaking the loop.
      
      Time Complexity : O(n)
      Space Complexity : O(n) => For maintaining the hash array
      
### 3. The 2-pointer method 
      
       There are two pointers, one hare (moves slowly) and tortoise (moves faster). Initially both point to the starting point. 
       Then both are incremented at different pace, i.e, hare = arr[arr[hare]] , tortoise = arr[tortoise].
       When the two points meet, we again move hare pointer to arr[0].
       Again we, start checking this time, hare = arr[hare] , tortoise = arr[tortoise]. When the two finally meet, that is the index of the 
       duplicate element.
       
       Time Complexity : O(n)
       Space Complexity : O(1)
