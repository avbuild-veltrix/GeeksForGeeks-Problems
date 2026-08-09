# Reverse digits

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

You are given an integer  **n.** Your task is to reverse the digits, ensuring that the reversed number has no leading zeroes.

 **Examples:** 

```
Input: n = 122
Output: 221
Explanation: By reversing the digits of number, number will change into 221.

```

```
Input : n = 200
Output: 2
Explanation: By reversing the digits of number, number will change into 2.
```

```
Input : n = 12345 
Output: 54321
Explanation: By reversing the digits of number, number will change into 54321.
```

 **Constraints:** 
1 <= n <= 106

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-09T08:31:42.942Z  

```cpp
class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int count;
        int rev = 0;
        while(n>0){
            count = n % 10;
            rev = rev * 10 + count;
            n = n/10;
        }
        return rev;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/reverse-digit0316/1)