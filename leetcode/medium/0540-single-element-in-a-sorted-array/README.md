# Single Element in a Sorted Array

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return  *the single element that appears only once*.

Your solution must run in `O(log n)` time and `O(1)` space.

 

 **Example 1:** 

```
Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2

```

 **Example 2:** 

```
Input: nums = [3,3,7,7,10,11,11]
Output: 10

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- 0 <= nums[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 26.3 MB (beats 38.85%)  
**Submitted:** 2026-09-16T13:31:50.987Z  

```cpp
class Solution {
public:
    int singleNonDuplicate(vector<int>& array) {
        int n = array.size();
        int high = n-1;
        int low = 0;
        int mid;
        while(low < high){
            mid = low + (high - low)/2;
            if(mid%2 == 1){
                mid--;
            }
            if(array[mid] == array[mid + 1]){
                low = mid + 2;
            }else{
                high = mid;
            }
        }
        int ans = array[low];
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/single-element-in-a-sorted-array/)