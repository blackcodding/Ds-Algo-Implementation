# Complexity Analysis 📈

## Linear Search
- Time complexity : O(n)
- Space complexity : O(1)

## Binary Search
- Time complexity : O(log(n))
- Space complexity : 
-     Itterative version - O(1)
-     Recursive version - O(n)   

###### Binary search works on monotonic functions (non-increasing or non-decreasing)

## Jump Search
- Time complexity : O(√n)
- Space complexity : O(1)

## Interpolation Search
- Time complexity : O(log(log(n))) 
- Space complexity : O(1)

###### Time Complexity increases with the increase in non uniformity of data. For uniformily distributed data Interpolation Search is better than Binary Search while it keeps on changing as uniformity of data changes and go upto O(n), while in case of Binary search its O(log(n)) dispite of how data is distributed in shorted array. Here is the average complexity considering most data to be uniform. 

## Exponential Search
- Time complexity : O(log(n)) 
- Space complexity : 
-     Itterative version - O(1)
-     Recursive version - O(n) 

###### Time Complexity depends on binary search only not exponential searcch(O(1)). The Exponential Search is better than Binary Search in every case specially for UNBOUNDED ARRAYS 

## Fibonacci Search
- Time complexity : O(log(n))
- Space complexity : O(1) 

## [Array #x]
- x = 1, This is solved in O(n)
- x = 2, This is solved in O(n²)
- x = 3, This is solved in O(n³)
- x = 4, This is solved in O(n³)
- x = 5, This is solved in O(n²) for the same problem for x = 4
##### If want to solve X = 2 in O(n) then you should use MAPS and if want to solve X = 3, 4 in O(n) then you should use KADANE'S ALGORITHM.
- x = 6, This is solved in O(n) using Kadane's Algo.
