# Quadratic Equation Roots

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a quadratic equation  **ax2 + bx + c = 0**, find its roots. If the equation has real roots, then return floor value of each root in decreasing order, If the roots are imaginary return  **-1**, the driver code will print  **Imaginary**.

 **Examples:** 

```
Input: a = 1, b = -2, c = 1
Output: [1, 1]
Explanation: Roots of equation x2-2x+1 are 1 and 1.
```

```
Input: a = 1, b = -7, c = 12
Output: [4, 3]
Explanation: Roots of equation x2 - 7x + 12 are 4 and 3.
```

 **Constraints:** 
-103 ≤ a, b, c ≤ 103

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-09T08:25:40.650Z  

```cpp
class Solution {
public:
    vector<int> quadraticRoots(int a, int b, int c) {
        
        int D = (b * b) - (4 * a * c);

        if (D < 0) {
            return {-1};
        }

        double r1 = ((-b) + sqrt(D)) / (2.0 * a);
        double r2 = ((-b) - sqrt(D)) / (2.0 * a);

        int root1 = floor(r1);
        int root2 = floor(r2);

        return {max(root1, root2), min(root1, root2)};
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/quadratic-equation-roots/1)