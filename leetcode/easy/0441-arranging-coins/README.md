# Arranging Coins

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You have `n` coins and you want to build a staircase with these coins. The staircase consists of `k` rows where the `ith` row has exactly `i` coins. The last row of the staircase  **may be**  incomplete.

Given the integer `n`, return  *the number of  **complete rows**  of the staircase you will build*.

 

 **Example 1:** 

```
Input: n = 5
Output: 2
Explanation: Because the 3rd row is incomplete, we return 2.

```

 **Example 2:** 

```
Input: n = 8
Output: 3
Explanation: Because the 4th row is incomplete, we return 3.

```

 

 **Constraints:** 

- 1 <= n <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9 MB (beats 2.29%)  
**Submitted:** 2026-09-17T05:35:09.375Z  

```cpp
// class Solution {
// public:
//     int arrangeCoins(int n) {
//         int low = 1; 
//         int high = n;
//         while(low <= high){
//             int mid = low + (high - low)/2;
//             long long coins = 1LL * mid*(mid + 1)/2;
//             if(coins <= n){
//                 low = mid + 1;
//             }else{
//                 high = mid - 1;
//             }
//         }
//         return low - 1;
//     }
// };


class Solution {
public:
    int arrangeCoins(int n) {
        int low = 1; 
        int high = n;
        while(low <= high){
            int mid = low + (high - low)/2;
            long long coins = 1LL * mid*(mid + 1)/2;
            if(coins <= n){
                // mid rows are possible
                // Try more rows
                low = mid + 1;
            }else{
                // mid rows are not possible
                // Try fewer rows
                high = mid - 1;
            }
        }
        return high;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/arranging-coins/)