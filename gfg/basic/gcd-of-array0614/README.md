# GCD of Array

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an array of n positive integers, find the GCD of all the array elements.

 **Example :** 

```
Input: n = 3, arr = [1, 2, 3]
Output: 1
Explanation: GCD of 1,2,3 is 1.
```

```
Input: n = 4, arr = [2, 4, 6, 8]
Output: 2
Explanation: Greatest common divisor of all the numbers is 2.
```

 **Constraints:** 
1 ≤ N, arr[i] ≤ 105

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-16T13:24:51.772Z  

```cpp
class Solution {
  public:
    int gcd(int n, vector<int> arr) {
        // Your code goes here
        int result = arr[0];
        for(int i = 1; i < n; i++){
            int a = result;
            int b = arr[i];
            
            while(b){
                int rem = a%b;
                a = b;
                b = rem;
            }
            result = a;
        }
        return result;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/gcd-of-array0614/1)