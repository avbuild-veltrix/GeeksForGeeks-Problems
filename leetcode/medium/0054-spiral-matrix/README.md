# Spiral Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an `m x n` `matrix`, return  *all elements of the*  `matrix`  *in spiral order*.

 

 **Example 1:** 

```
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

```

 **Example 2:** 

```
Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 10
- -100 <= matrix[i][j] <= 100

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.4 MB (beats 57.18%)  
**Submitted:** 2026-08-30T08:52:17.947Z  

```cpp
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> arr;

        int min_r = 0, min_c = 0;
        int max_c = matrix[0].size() - 1;
        int max_r = matrix.size() - 1;

        while(min_r <= max_r && min_c <= max_c) {

            // Left → Right
            for(int i = min_c; i <= max_c; i++) {
                arr.push_back(matrix[min_r][i]);
            }
            min_r++;

            // Top → Bottom
            for(int i = min_r; i <= max_r; i++) {
                arr.push_back(matrix[i][max_c]);
            }
            max_c--;

            // Right → Left
            if(min_r <= max_r) {
                for(int i = max_c; i >= min_c; i--) {
                    arr.push_back(matrix[max_r][i]);
                }
                max_r--;
            }

            // Bottom → Top
            if(min_c <= max_c) {
                for(int i = max_r; i >= min_r; i--) {
                    arr.push_back(matrix[i][min_c]);
                }
                min_c++;
            }
        }

        return arr;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/spiral-matrix/)