# Maximum Count of Positive Integer and Negative Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array `nums` sorted in  **non-decreasing**  order, return  *the maximum between the number of positive integers and the number of negative integers.* 

- In other words, if the number of positive integers in nums is pos and the number of negative integers is neg, then return the maximum of pos and neg.

 **Note**  that `0` is neither positive nor negative.

 

 **Example 1:** 

```
Input: nums = [-2,-1,-1,1,2,3]
Output: 3
Explanation: There are 3 positive integers and 3 negative integers. The maximum count among them is 3.

```

 **Example 2:** 

```
Input: nums = [-3,-2,-1,0,0,1,2]
Output: 3
Explanation: There are 2 positive integers and 3 negative integers. The maximum count among them is 3.

```

 **Example 3:** 

```
Input: nums = [5,20,66,1314]
Output: 4
Explanation: There are 4 positive integers and 0 negative integers. The maximum count among them is 4.

```

 

 **Constraints:** 

- 1 <= nums.length <= 2000
- -2000 <= nums[i] <= 2000
- nums is sorted in a non-decreasing order.

 

 **Follow up:**  Can you solve the problem in `O(log(n))` time complexity?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 21.4 MB (beats 63.27%)  
**Submitted:** 2026-09-15T08:07:58.927Z  

```cpp
// class Solution {
// public:
//     int maximumCount(vector<int>& nums) {
//         int n = nums.size();
//         int last = n-1;
//         int neg = 0, pos = 0;
//         for(int i = 0; i < n; i++){
//             if(nums[i] < 0){
//                 neg++;
//             }else if(nums[i] > 0){
//                 pos++;
//             }else{

//             }
//         }
//         if(pos > neg){
//             return pos;
//         }else{
//             return neg;
//         }
//     }
// };

class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int n = nums.size();

        // First element >= 0
        int low = 0, high = n - 1;
        int firstNonNegative = n;

        while(low <= high) {
            int mid = (low + high) / 2;

            if(nums[mid] >= 0) {
                firstNonNegative = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        int neg = firstNonNegative;


        // First element > 0
        low = 0;
        high = n - 1;
        int firstPositive = n;

        while(low <= high) {
            int mid = (low + high) / 2;

            if(nums[mid] > 0) {
                firstPositive = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        int pos = n - firstPositive;

        return max(neg, pos);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/)