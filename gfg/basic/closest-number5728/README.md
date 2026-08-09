# Closest to n and Divisible by m

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given two integers  **n**  and  **m** (m != 0). The problem is to find the number closest to  **n**  and divisible by  **m**. If there is more than one such number, then output the one having the maximum absolute value.

 **Examples :** 

```
Input: n = 13, m = 4
Output: 12
Explanation: 12 is the Closest Number to 13 which is divisible by 4.
```

```
Input: n = -15, m = 6
Output: -18
Explanation: Both -12 and -18 are closest to -15 and divisible by 6, but -18 has the maximum absolute value. So, output is -18.
```

 **Constraints:** 
-105 ≤ n, m ≤ 105

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-09T09:41:16.665Z  

```cpp
class Solution {
public:
    int closestNumber(int n, int m) {
        
        int rem = n % m;
        
        int lower = n - rem;
        int upper;
        
        if (n >= 0) {
            upper = lower + abs(m);
        } else {
            upper = lower - abs(m);
        }
        
        int d1 = abs(n - lower);
        int d2 = abs(n - upper);
        
        if (d1 < d2)
            return lower;
        
        if (d2 < d1)
            return upper;
        
        return abs(lower) > abs(upper) ? lower : upper;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/closest-number5728/1)