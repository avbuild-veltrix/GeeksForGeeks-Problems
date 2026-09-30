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
**Runtime:** 3 ms (beats 28.79%)  
**Memory:** 15.1 MB (beats 83.63%)  
**Submitted:** 2026-09-30T12:50:17.719Z  

```cpp
class Solution {
public:

    int Power(int a, long long b) {

        if(b == 0) {
            return 1;
        }

        int half = Power(a, b / 2);

        if(b % 2 == 0) {
            return (1LL * half * half) % 1337;
        }
        else {
            return (1LL * a * half * half) % 1337;
        }
    }

    int myPow(int a, int b) {

        int n = b;

        if(n < 0) {
            return 1 / Power(a, -n);
        }

        return Power(a, n);
    }

    int superPow(int a, vector<int>& b) {

        int result = 1;

        for(int i = 0; i < b.size(); i++) {

            result = Power(result, 10);

            result = (1LL * result * Power(a, b[i])) % 1337;
        }

        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/super-pow/)