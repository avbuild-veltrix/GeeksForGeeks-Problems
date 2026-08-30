# Search in a Row-Column Sorted

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a 2D integer matrix  **mat[][]**  of size  **n x m**, where every row and column is sorted in increasing order and a number  **x**, return  **true** if the element  **x**  is present in the matrix. Otherwise, return  **false**.

 **Examples:** 

```
Input: mat[][] = [[3, 30, 38], [20, 52, 54], [35, 60, 69]], x = 62
Output: false
Explanation: 62 is not present in the matrix, so output is false.

```

```
Input: mat[][] = [[18, 21, 27],  [38, 55, 67]], x = 55
Output: true
Explanation: 55 is present in the matrix.
```

```
Input: mat[][] = [[1, 2, 3], [4, 5, 6], [7, 8, 9]], x = 3
Output: true
Explanation: 3 is present in the matrix.

```

 **Constraints** :
1 ≤ n, m ≤ 103
1 ≤ mat[i][j] ≤ 109
1 ≤ x ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-30T07:23:07.617Z  

```cpp
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // code here
        int r = 0;
        int c = mat[0].size()-1;
        bool found = false;
        while(r < mat.size() && c >= 0){
            if(mat[r][c] > x){
                c--;
            }else if(mat[r][c] < x){
                r++;
            }else{
                found = true;
                return found;
            }
        }
        return found;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/1)