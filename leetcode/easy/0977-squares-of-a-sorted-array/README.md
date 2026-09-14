# Squares of a Sorted Array

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums` sorted in  **non-decreasing**  order, return  *an array of  **the squares of each number**  sorted in non-decreasing order*.

 

 **Example 1:** 

```
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].

```

 **Example 2:** 

```
Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- -104 <= nums[i] <= 104
- nums is sorted in non-decreasing order.

 

 **Follow up:**  Squaring each element and sorting the new array is very trivial, could you find an `O(n)` solution using a different approach?

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 52.09%)  
**Memory:** 33 MB (beats 5.03%)  
**Submitted:** 2026-09-14T05:23:15.662Z  

```cpp
//FIRST METHOD.
// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int n = nums.size();
//         for(int i = 0; i < n; i++){
//             nums[i] = nums[i] * nums[i];
//         }
//         sort(nums.begin(), nums.end());
//         return nums;
//     }
// };

// SECOND METHOD.
// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int n = nums.size();
//         for(int i = 0; i < n; i++){
//             nums[i] = nums[i] * nums[i];
//         }
//         for(int i = 1; i < n; i++){
//             int j = i; 
//             while(j > 0 && nums[j] < nums[j-1]){
//                 swap(nums[j], nums[j-1]);
//                 j--;
//             }
//         }
//         return nums;
//     }
// };

// THIRD METHOD.
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> neg = {};
        vector<int> pos = {};
        vector<int> ans = {};
        for(int i = 0; i < n; i++){
            if(nums[i] >= 0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        for(int i = 0; i < neg.size(); i++){
            neg[i] = neg[i]*neg[i];
        }
        reverse(neg.begin(), neg.end());
        for(int i = 0; i < pos.size(); i++){
            pos[i] = pos[i]*pos[i];
        }
        int i = 0, j = 0;
        int a = neg.size();
        int b = pos.size();
        while(i < a && j < b){
            if(neg[i] < pos[j]){
                ans.push_back(neg[i]);
                i++;
            }else{
                ans.push_back(pos[j]);
                j++;
            }
        }
        while(i < a){
            ans.push_back(neg[i]);
            i++;
        }
        while(j < b){
            ans.push_back(pos[j]);
            j++;
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/squares-of-a-sorted-array/)