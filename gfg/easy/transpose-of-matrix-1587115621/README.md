# Transpose of Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a square matrix of size  **n x n**, return the **transpose**  matrix of the given matrix.

The  **transpose**  of a matrix is obtained by converting all the rows to columns and all the columns to rows.

 **Examples:** 

```
Input: mat[][] = [[1, 1, 1, 1], [2, 2, 2, 2], [3, 3, 3, 3], [4, 4, 4, 4]]
Output: [[1, 2, 3, 4], [1, 2, 3, 4], 1, 2, 3, 4], [1, 2, 3, 4]]
Explanation: Converting rows into columns and columns into rows.
```

```
Input: mat[][] =  [[1, 2], [9, -2]]
Output: [[1, 9], [2, -2]]
Explanation: Converting rows into columns and columns into rows.
```

 **Constraints:** 
1 ≤ n ≤ 103
-109 ≤ mat[i][j] ≤109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-20T11:43:35.774Z  

```cpp
class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        // code here
        int r = mat.size();
        int c = mat[0].size();
        vector<vector<int>> arr(c, vector<int>(r));
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                arr[j][i] = mat[i][j];
            }
        }
        return arr;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1)