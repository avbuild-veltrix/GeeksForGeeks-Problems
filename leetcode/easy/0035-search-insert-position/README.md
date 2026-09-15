# Search Insert Position

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with `O(log n)` runtime complexity.

 

 **Example 1:** 

```
Input: nums = [1,3,5,6], target = 5
Output: 2

```

 **Example 2:** 

```
Input: nums = [1,3,5,6], target = 2
Output: 1

```

 **Example 3:** 

```
Input: nums = [1,3,5,6], target = 7
Output: 4

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- -104 <= nums[i] <= 104
- nums contains distinct values sorted in ascending order.
- -104 <= target <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 13.7 MB (beats 43.23%)  
**Submitted:** 2026-09-15T07:06:44.375Z  

```cpp
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int high, low, mid;
        high = nums.size() - 1;
        low = 0;
        while(low <= high){
            mid = (high + low)/2;
            if(nums[mid] > target){
                high = mid - 1;
            }else if(nums[mid] < target){
                low = mid + 1;
            }else{
                return mid;
            }
        }
        return low;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/search-insert-position/)