# Print the Kth Digit

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given two numbers  **a**  and  **b**, find  **kth**  digit from right of  **ab.** 

 **Example 1:** 

```
Input: a = 3, b = 3, k = 1
Output: 7
Explanation: 33 = 27 and 1st digit from right is 7
```

```
Input: a = 5, b = 2, k = 2
Output: 2
Explanation: 52 = 25 and second digit from right is 2.
```

 **Constraints:** 
1 <= a,b <= 15
1 <= k <= digits in ab

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T12:00:38.400Z  

```cpp
class Solution {
  public:
    int kthDigit(int a, int b, int k) {
        // code here
        long long res = 1;
        for(int i = 1; i <= b; i++){
            res = res * a;
        }
        for(int i = 1; i < k; i++){
            res = res/10;
        }
        return res%10;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/print-the-kth-digit3520/1)