# Find First and Last Position of Element in Sorted Array

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers `nums` sorted in non-decreasing order, find the starting and ending position of a given `target` value.

If `target` is not found in the array, return `[-1, -1]`.

You must write an algorithm with `O(log n)` runtime complexity.

 

 **Example 1:** 

```
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

```

 **Example 2:** 

```
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

```

 **Example 3:** 

```
Input: nums = [], target = 0
Output: [-1,-1]

```

 

 **Constraints:** 

- 0 <= nums.length <= 105
- -109 <= nums[i] <= 109
- nums is a non-decreasing array.
- -109 <= target <= 109

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 17.4 MB (beats 87.99%)  
**Submitted:** 2026-10-02T03:27:20.930Z  

```cpp
// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int mid,low,high;
//         vector<int> ans(2,-1);
//         high = nums.size()-1;
//         low = 0;

//         //First occurance.
//         while(low <= high){
//             mid = (low + high)/2;
//             if(nums[mid] < target){
//                 low = mid + 1;
//             }else if(nums[mid] > target){
//                 high = mid - 1;
//             }else{
//                 ans[0] = mid;
//                 high = mid - 1;
//             }
//         }

//         //Last occurance.
//         low = 0;
//         high = nums.size()-1;
        
//         while(low <= high){
//             mid = (low + high)/2;
//             if(nums[mid] < target){
//                 low = mid + 1;
//             }else if(nums[mid] > target){
//                 high = mid - 1;
//             }else{
//                 ans[1] = mid;
//                 low = mid + 1;
//             }
//         }
//         return ans;
//     }
// };


// 2. Using lower_bound() and upper_bound()

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        auto first = lower_bound(nums.begin(), nums.end(), target);
        auto last = upper_bound(nums.begin(), nums.end(), target);

        if (first == nums.end() || *first != target) {
            return {-1, -1};
        }

        return {
            static_cast<int>(first - nums.begin()),
            static_cast<int>(last - nums.begin() - 1)
        };
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)