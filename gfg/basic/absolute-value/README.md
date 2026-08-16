# Absolute Value

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

You are given an interger  **n**, find the absolute value of the integer  **n**.

 **Examples:** 

```
Input: n = -32
Output: 32
Explanation:The absolute value of -32 is 32.

```

```
Input: n = 45
Output: 45
Explanation: The absolute value of 45 is 45 itself.
```

 **Constraints:** 
-106 ≤ n ≤ 106

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-16T12:56:46.270Z  

```cpp
class Solution {
  public:
    int absolute(int n) {
        // code here
        if(n < 0){
            return (-n);
        }else{
            return n;
        }
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/absolute-value/1)