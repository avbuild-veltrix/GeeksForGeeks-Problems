# Search a 2D Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an `m x n` integer matrix `matrix` with the following two properties:

- Each row is sorted in non-decreasing order.
- The first integer of each row is greater than the last integer of the previous row.

Given an integer `target`, return `true`  *if*  `target`  *is in*  `matrix`  *or*  `false`  *otherwise*.

You must write a solution in `O(log(m * n))` time complexity.

 

 **Example 1:** 

```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

```

 **Example 2:** 

```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 100
- -104 <= matrix[i][j], target <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 13.3 MB (beats 77.88%)  
**Submitted:** 2026-10-02T03:50:20.395Z  

```cpp
class Solution {
public:

    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int low = 0;
        int m = mat.size();
        int n = mat[0].size();
        int high = m * n - 1;
        while(low <= high){
            int mid = low + (high - low)/2;

            int row = mid / n;
            int column = mid % n;

            if(mat[row][column] == target){
                return true;
            }else if(mat[row][column] < target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return false;
    }
};


// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& mat, int x) {
//         int r = 0;
//         int c = mat[0].size()-1;
//         bool found = false;
//         while(r < mat.size() && c >= 0){
//             if(mat[r][c] > x){
//                 c--;
//             }else if(mat[r][c] < x){
//                 r++;
//             }else{
//                 found = true;
//                 return found;
//             }
//         }
//         return found;
//     }
// };
```

---

[View on LeetCode](https://leetcode.com/problems/search-a-2d-matrix/)