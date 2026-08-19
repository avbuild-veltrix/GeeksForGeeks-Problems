# Rotate by 90 degree

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a square matrix  **mat** [][] of size  **n x n**. The task is to rotate it by **90 degrees**  in an **anti-clockwise**  direction without using any extra space. 

 **Examples:** 

```
Input: mat[][] = [[0, 1, 2], 
                [3, 4, 5], 
                [6, 7, 8]] 
Output: [[2, 5, 8],
        [1, 4, 7],
        [0, 3, 6]]
```

```
Input: mat[][] = [[1, 2],
                [3, 4]]
Output: [[2, 4],
        [1, 3]]

```

 **Constraints:** 
1 ≤ n ≤ 102
0 ≤ mat[i][j] ≤ 103

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-19T09:01:10.913Z  

```cpp
class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                swap(mat[j][i], mat[i][j]);
            }
        }
        
        for(int i = 0; i < n; i++){
            int start = 0, end = n-1;
            while(start < end){
                swap(mat[start][i], mat[end][i]);
                start++;
                end--;
            }
        }
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1)