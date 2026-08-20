# Multiply Two Matrices

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given two square matrices  **a[][]**  and  **b[][]**, each of size  **n * n**, return the matrix obtained by multiplying a and b.

 **Examples:** 

```
Input: a = [[7, 8], [2, 9]], b = [[14, 5], [5, 18]]
Output: [[138, 179], [73, 172]]
Explanation: Multiplying the rows of a with the columns of b gives the resulting matrix.
```

```
Input: a = [[17, 4], [17, 16]], b = [[9, 2], [7, 1]]
Output: [[181, 38], [265, 50]]
Explanation: Multiplying the rows of a with the columns of b gives the resulting matrix.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-20T11:47:32.267Z  

```cpp
class Solution {
  public:
    vector<vector<int>> multiplyMatrices(vector<vector<int>> &a,
                                         vector<vector<int>> &b) {
        // code here
        int n = a.size();
        vector<vector<int>> ans(n, vector<int>(n,0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                for(int k = 0; k < n; k++){
                    ans[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/multiply-matrices/1)