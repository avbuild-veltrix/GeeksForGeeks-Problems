# Spiral Matrix II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a positive integer `n`, generate an `n x n` `matrix` filled with elements from `1` to `n2` in spiral order.

 

 **Example 1:** 

```
Input: n = 3
Output: [[1,2,3],[8,9,4],[7,6,5]]

```

 **Example 2:** 

```
Input: n = 1
Output: [[1]]

```

 

 **Constraints:** 

- 1 <= n <= 20

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.5 MB (beats 43.16%)  
**Submitted:** 2026-08-30T09:56:30.799Z  

```cpp
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int min_r = 0, min_c=0;
        int max_r = n-1;
        int max_c = n-1;
        vector<vector<int>> arr(n, vector<int>(n));
        int a = 1;
        while(min_r <= max_r && min_c <= max_c){
            for(int i = min_c; i <= max_c; i++){
                arr[min_r][i] = a;
                a++;
            }
            min_r++;

            for(int i = min_r; i <= max_r; i++){
                arr[i][max_c] = a;
                a++;
            }
            max_c--;

            for(int i = max_c; i >= min_c; i--){
                arr[max_r][i] = a;
                a++;
            }
            max_r--;

            for(int i = max_r; i >= min_r; i--){
                arr[i][min_c] = a;
                a++;
            }
            min_c++;
        } 
        return arr;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/spiral-matrix-ii/)