# Search in a  Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a 2D integer array  **mat[][]**  of n rows and m columns and a number  **x**, find whether element x is present in the matrix or not.

 **Examples:** 

```
Input: mat[][] = [[6, 23, 21], [4, 45, 32], [69, 11, 87]], x = 32
Output: true
Explanation: 32 is present in the matrix.

```

```
Input: mat[][] = [[14, 34, 23, 95, 43, 28]], x = 55
Output: false
Explanation: 55 is not present in the matrix.

```

```
Input: mat[][] = [[87, 9, 99], [101, 3, 111]], x = 101
Output: true
Explanation: 101 is present in the matrix.
```

**Constraints:
**1 ≤ n, m ≤ 500
1 ≤ mat[][] ≤ 105
1 ≤ x ≤ 105

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-30T07:17:31.173Z  

```cpp
class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int target) {
        for(int i = 0; i < mat.size(); i++) {
            for(int j = 0; j < mat[0].size(); j++) {
                if(mat[i][j] == target) {
                    return true;
                }
            }
        }

        return false;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/search-in-a-matrix--021840/1)