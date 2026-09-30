# Super Pow

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Your task is to calculate `ab` mod `1337` where `a` is a positive integer and `b` is an extremely large positive integer given in the form of an array.

 

 **Example 1:** 

```
Input: a = 2, b = [3]
Output: 8

```

 **Example 2:** 

```
Input: a = 2, b = [1,0]
Output: 1024

```

 **Example 3:** 

```
Input: a = 1, b = [4,3,3,8,5,2]
Output: 1

```

 

 **Constraints:** 

- 1 <= a <= 231 - 1
- 1 <= b.length <= 2000
- 0 <= b[i] <= 9
- b does not contain leading zeros.

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.5 MB  
**Submitted:** 2026-09-30T11:39:47.318Z  

```cpp
class Solution {
public:
    int superPow(int a, vector<int>& b) {
        int n = b.size();
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum = sum * 10 + b[i];
        }
        return pow(a,sum);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/super-pow/)