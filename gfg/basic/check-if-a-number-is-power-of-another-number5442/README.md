# Check for Power

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given two positive integers  **x**  and **y**, determine if y is a power of x. If y is a power of x, return  **true**. Otherwise, return  **false**.

 **Examples:** 

```
Input: x = 2, y = 8
Output: true 
Explanation: 23 is equal to 8.
```

```
Input: x = 1, y = 8
Output: false
Explanation: Any power of 1 is not equal to 8.
```

```
Input: x = 46, y = 205962976
Output: true
Explanation: 465 is equal to 205962976.
```

```
Input: x = 50, y = 312500000
Output: true
Explanation: 505 is equal to 312500000.
```

**Constraints:
**1 ≤ x ≤ 103
1 ≤ y ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-16T12:55:31.172Z  

```cpp
class Solution {
  public:
    bool isPower(int x, int y) {
        // code here
        int i = 1;
        for(i = 1; i < y; i++){
            if(x == 1){
                return false;
            }
            else if(y%x == 0 && x != 1){
                y = y/x;
            }else{
                return false;
            }
        }
        if(i){
            return true;
        }
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/check-if-a-number-is-power-of-another-number5442/1)