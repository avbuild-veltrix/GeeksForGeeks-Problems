# Sum of Natural Number Cubes

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an integer  **n,** calculate the sum of series  **13 + 23 + 33 + 43 + …**  till n-th term.

 **Examples:** 

```
Input: n = 5
Output: 225
Explanation: 13 + 23 + 33 + 43 + 53 = 225
```

```
Input: n = 7
Output: 784
Explanation: 13 + 23 + 33 + 43 + 53 + 63 + 73 = 784
```

 **Constraints:** 
1 <= n <= 200

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-09T08:54:18.233Z  

```cpp
class Solution {
  public:
    int sumOfSeries(int n) {
        // code here
        int c = 0, cube = 0;
        for(int i = 1; i <= n; i++){
            c = (i*i*i);
            cube += c;
        }
        return cube;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1)