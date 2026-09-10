# Left and Right Sum Differences

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a  **0-indexed**  integer array `nums` of size `n`.

Define two arrays `leftSum` and `rightSum` where:

- leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
- rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.

Return an integer array `answer` of size `n` where `answer[i] = |leftSum[i] - rightSum[i]|`.

 

 **Example 1:** 

```
Input: nums = [10,4,8,3]
Output: [15,1,11,22]
Explanation: The array leftSum is [0,10,14,22] and the array rightSum is [15,11,3,0].
The array answer is [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22].

```

 **Example 2:** 

```
Input: nums = [1]
Output: [0]
Explanation: The array leftSum is [0] and the array rightSum is [0].
The array answer is [|0 - 0|] = [0].

```

 

 **Constraints:** 

- 1 <= nums.length <= 1000
- 1 <= nums[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 14.26%)  
**Memory:** 15.6 MB (beats 8.98%)  
**Submitted:** 2026-09-10T06:45:36.074Z  

```cpp
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> rightSum = {};
        vector<int> leftSum = {};
        vector<int> answer = {};
        int rSum = 0, lSum = 0;
        for(int i = nums.size()-1; i >= 0; i--){
            rightSum.insert(rightSum.begin(), rSum);
            rSum += nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            leftSum.push_back(lSum);
            lSum += nums[i];
        }
        int ans = 0;
        for(int i = 0; i < rightSum.size(); i++){
            ans = abs(rightSum[i] - leftSum[i]);
            answer.push_back(ans);
        }
        return answer;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/left-and-right-sum-differences/)