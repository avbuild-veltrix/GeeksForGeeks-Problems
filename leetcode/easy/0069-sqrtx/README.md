# Sqrt(x)

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a non-negative integer `x`, return  *the square root of* `x` *rounded down to the nearest integer*. The returned integer should be  **non-negative**  as well.

You  **must not use**  any built-in exponent function or operator.

- For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

 

 **Example 1:** 

```
Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.

```

 **Example 2:** 

```
Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

```

 

 **Constraints:** 

- 0 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.6 MB (beats 14.17%)  
**Submitted:** 2026-09-16T12:18:23.501Z  

```cpp
// class Solution {
// public:
//     int mySqrt(int x) {
//         if (x == 0 || x == 1)
//             return x;

//         int start = 1;
//         int end = x;

//         while (start <= end) {
//             int mid = start + (end - start) / 2;

//             long long square = 1LL * mid * mid;

//             if (square == x)
//                 return mid;

//             else if (square < x)
//                 start = mid + 1;

//             else
//                 end = mid - 1;
//         }

//         return end;
//     }
// };
// class Solution {
// public:
//     long long mySqrt(long long x) {
//         long long high = x, low = 0,mid;
//         long long ans = 0;

//         while(low <= high){
//             mid = (low + high)/2;
//             if(mid * mid <= x){
//                 ans = mid;
//                 low = mid + 1;
//             }else{
//                 high = mid - 1;
//             }
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     long long mySqrt(long long x) {
//         for(long long i = 0; i <= x; i++){
//             if(i*i == x){
//                 return i;
//             }
//             if(i*i > x){
//                 return i-1;
//             }
//         }
//         return 0;
//     }
// };


// class Solution {
// public:
//     long long mySqrt(long long x) {
//         long long high = x, mid, low = 0;
//         long long ans = 0;

//         while(low <= high){
//             mid = (low + high)/2;
//             if(mid * mid <= x){
//                 ans = mid;
//                 low = mid + 1;
//             }else{
//                 high = mid - 1;
//             }
//         }
//         return ans;
//     }
// };


// class Solution {
// public:
//     long long mySqrt(long long x) {
//         long long high = x, low = 0, mid;
//         long long ans = 0;
//         while(low <= high){
//             mid = low + (high - low)/2;
//             if(mid*mid <= x){
//                 ans = mid;
//                 low = mid + 1;
//             }else{
//                 high = mid - 1;
//             }
//         }
//         return ans;
//     }
// };


class Solution {
public:
    long long mySqrt(long long x) {
        long long high = x, low = 0, mid;
        long long ans = 0;
        while(low <= high){
            mid = low + (high - low)/2;
            if(mid * mid <= x){
                ans = mid;
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sqrtx/)