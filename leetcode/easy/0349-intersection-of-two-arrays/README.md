# Intersection of Two Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two integer arrays `nums1` and `nums2`, return  *an array of their intersection*. Each element in the result must be  **unique**  and you may return the result in  **any order**.

 

 **Example 1:** 

```
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]

```

 **Example 2:** 

```
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.

```

 

 **Constraints:** 

- 1 <= nums1.length, nums2.length <= 1000
- 0 <= nums1[i], nums2[i] <= 1000

## Solution

**Language:** C++  
**Runtime:** 11 ms (beats 5.07%)  
**Memory:** 14 MB (beats 72.40%)  
**Submitted:** 2026-09-15T04:39:29.894Z  

```cpp
// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> ans = {};
//         for(int i = 0; i < nums1.size(); i++){
//             for(int j = 0; j < nums2.size(); j++){
//                 if(nums1[i] == nums2[j]){
//                     bool found = false;

//                     for(int k = 0; k < ans.size(); k++){
//                         if(ans[k] == nums1[i]){
//                             found = true;
//                             break;
//                         }
//                     }
//                     if(!found){
//                         ans.push_back(nums1[i]);
//                     }
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    result.push_back(nums1[i]);
                }
            }
        }
        for(int i = 0; i < result.size(); i++){
            for(int j = 0; j < result.size(); j++){
                if(i != j && result[i] == result[j]){
                    result.erase(result.begin() + j);
                    j--;
                }
            }
        }
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/intersection-of-two-arrays/)