# Move Zeroes

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums`, move all `0`'s to the end of it while maintaining the relative order of the non-zero elements.

 **Note**  that you must do this in-place without making a copy of the array.

 

 **Example 1:** 

```
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [0]

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- -231 <= nums[i] <= 231 - 1

 

 **Follow up:**  Could you minimize the total number of operations done?

## Solution

**Language:** C++  
**Runtime:** 34 ms (beats 6.60%)  
**Memory:** 23.8 MB (beats 82.75%)  
**Submitted:** 2026-09-13T05:32:27.847Z  

```cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int k = 1+i;
            if(nums[i] == 0){
                while(k < n && nums[k] == 0){
                    k++;
                }
                if(k < n){
                    nums[i] = nums[k];
                    nums[k] = 0;
                    k++;
                }

            }
        }
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/move-zeroes/)