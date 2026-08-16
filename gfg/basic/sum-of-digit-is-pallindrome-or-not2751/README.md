# Palindrome Digit Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a number  **n**. Return  **true** if the digit sum(or sum of digits) of n is a Palindrome number otherwise  **false**.
A Palindrome number is a number that stays the same when reversed

 **Examples:** 

```
Input: n = 56
Output: true
Explanation: The digit sum of 56 is 5+6 = 11. Since, 11 is a palindrome number.Thus, answer is true.
```

```
Input: n = 98
Output: false
Explanation: The digit sum of 98 is 9+8 = 17. Since 17 is not a palindrome,thus, answer is false.
```

 **Constraints:** 
1 ≤ n ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-16T13:10:28.339Z  

```cpp
class Solution {
  public:
    bool isDigitSumPalindrome(int n) {
        // code here
        int sum = 0;
        while(n>0){
            int rem = n%10;
            sum += rem;
            n /= 10;
        }
        int pl1 = sum;
        int pl = 0;
        while(sum > 0){
            int rem = sum%10;
            pl = 10*pl + rem;
            sum /= 10;
        }
        if(pl == pl1){
            return true;
        }else{
            return false;
        }
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not2751/1)