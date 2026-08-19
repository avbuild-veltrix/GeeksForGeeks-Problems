# Rotate a Matrix by 180 Counterclockwise

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a 2D square matrix  **mat[][]** of size  **n x n**, rotate it by  **180**   **degrees**  without using extra space.

 **Note:**  You must rotate the matrix **in place** and modify the input matrix directly.

 **Examples:** 

```
Input:  mat[][] = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
Output: [[9, 8, 7], [6, 5, 4], [3, 2, 1]]
Explanation:

The output matrix is the input matrix rotated by 180 degress.

```

 

```
Input: mat[][] = [[1, 2], [3, 4]]
Output: [[4, 3], [2, 1]]
Explanation : The output matrix is the input matrix rotated by 180 degrees.
```

 **Constraints:** 
1 ≤ n ≤ 500
0 ≤ mat[i][j] ≤ 104

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-19T09:11:35.680Z  

```cpp
class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        for(int i = 0; i < n/2; i++){
            for(int j = 0; j < n; j++){
                swap(mat[i][j], mat[n-i-1][j]);
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n/2; j++){
                swap(mat[i][j], mat[i][n-1-j]);
            }
        }
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/c-matrix-rotation-by-180-degree0745/1)