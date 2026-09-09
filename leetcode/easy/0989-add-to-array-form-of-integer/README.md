# Add to Array-Form of Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

The  **array-form**  of an integer `num` is an array representing its digits in left to right order.

- For example, for num = 1321, the array form is [1,3,2,1].

Given `num`, the  **array-form**  of an integer, and an integer `k`, return  *the  **array-form**  of the integer*  `num + k`.

 

 **Example 1:** 

```
Input: num = [1,2,0,0], k = 34
Output: [1,2,3,4]
Explanation: 1200 + 34 = 1234

```

 **Example 2:** 

```
Input: num = [2,7,4], k = 181
Output: [4,5,5]
Explanation: 274 + 181 = 455

```

 **Example 3:** 

```
Input: num = [2,1,5], k = 806
Output: [1,0,2,1]
Explanation: 215 + 806 = 1021

```

 

 **Constraints:** 

- 1 <= num.length <= 104
- 0 <= num[i] <= 9
- num does not contain any leading zeros except for the zero itself.
- 1 <= k <= 104

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 28.26%)  
**Memory:** 31.6 MB (beats 65.93%)  
**Submitted:** 2026-09-09T07:20:13.462Z  

```cpp
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {

        int i = num.size() - 1;

        while(i >= 0 && k > 0) {

            num[i] += k % 10;

            k = k / 10;

            if(num[i] >= 10) {
                num[i] -= 10;
                k += 1;
            }

            i--;
        }

        while(k > 0) {
            num.insert(num.begin(), k % 10);
            k = k / 10;
        }

        return num;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/add-to-array-form-of-integer/)