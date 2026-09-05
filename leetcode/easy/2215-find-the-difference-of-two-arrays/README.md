# Find the Difference of Two Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two  **0-indexed**  integer arrays `nums1` and `nums2`, return  *a list*  `answer`  *of size*  `2`  *where:* 

- answer[0] is a list of all distinct integers in nums1 which are not present in nums2.
- answer[1] is a list of all distinct integers in nums2 which are not present in nums1.

 **Note**  that the integers in the lists may be returned in  **any**  order.

 

 **Example 1:** 

```
Input: nums1 = [1,2,3], nums2 = [2,4,6]
Output: [[1,3],[4,6]]
Explanation:
For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].
For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums1. Therefore, answer[1] = [4,6].
```

 **Example 2:** 

```
Input: nums1 = [1,2,3,3], nums2 = [1,1,2,2]
Output: [[3],[]]
Explanation:
For nums1, nums1[2] and nums1[3] are not present in nums2. Since nums1[2] == nums1[3], their value is only included once and answer[0] = [3].
Every integer in nums2 is present in nums1. Therefore, answer[1] = [].

```

 

 **Constraints:** 

- 1 <= nums1.length, nums2.length <= 1000
- -1000 <= nums1[i], nums2[i] <= 1000

## Solution

**Language:** C++  
**Runtime:** 151 ms (beats 5.18%)  
**Memory:** 31.2 MB (beats 95.42%)  
**Submitted:** 2026-09-05T14:15:36.768Z  

```cpp
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans1 = {};
        vector<int> ans2 = {};

        for(int i = 0; i < nums1.size(); i++){
            bool found = false;

            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    found = true;
                    break;
                }
            }

            if(!found){
                bool duplicate = false;

                for(int k = 0; k < ans1.size(); k++){
                    if(ans1[k] == nums1[i]){
                        duplicate = true;
                        break;
                    }
                }

                if(!duplicate){
                    ans1.push_back(nums1[i]);
                }
            }
        }

        for(int i = 0; i < nums2.size(); i++){
            bool found = false;

            for(int j = 0; j < nums1.size(); j++){
                if(nums2[i] == nums1[j]){
                    found = true;
                    break;
                }
            }

            if(!found){
                bool duplicate = false;

                for(int k = 0; k < ans2.size(); k++){
                    if(ans2[k] == nums2[i]){
                        duplicate = true;
                        break;
                    }
                }

                if(!duplicate){
                    ans2.push_back(nums2[i]);
                }
            }
        }

        return {ans1, ans2};
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-the-difference-of-two-arrays/)