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
**Memory:** 26.2 MB (beats 71.61%)  
**Submitted:** 2026-09-17T04:15:54.656Z  

```cpp
// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& array) {
//         int n = array.size();
//         int high = n-1;
//         int low = 0;
//         int mid;
//         while(low < high){
//             mid = low + (high - low)/2;
//             if(mid%2 == 1){
//                 mid--;
//             }
//             if(array[mid] == array[mid + 1]){
//                 low = mid + 2;
//             }else{
//                 high = mid;
//             }
//         }
//         int ans = array[low];
//         return ans;
//     }
// };


// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& array) {
//         int n = array.size();
//         int high = n-1;
//         int low = 0;
//         int mid;
//         while(low < high){
//             mid = low + (high - low)/2;
//             if(mid%2 == 1){
//                 mid--;
//             }
//             if(array[mid] == array[mid + 1]){
//                 low = mid + 2;
//             }else{
//                 high = mid - 1;
//             }
//         }
//         int ans = array[low];
//         return ans;
//     }
// };


class Solution {
public:
    int singleNonDuplicate(vector<int>& array) {
        int n = array.size();
        int high = n-1;
        int low = 0;
        int mid;
        while(low <= high){
            int mid = low + (high - low)/2;
            if ((mid == 0 || array[mid] != array[mid - 1]) &&
                (mid == n - 1 || array[mid] != array[mid + 1])
            ) {
                return array[mid];
            }
            int f = mid, s = mid;
            if(mid > 0 && array[mid] == array[mid-1]){
                f = mid - 1;
            }else{
                s = mid+1;
            }
            int leftLength = f - low;
            if(leftLength % 2 == 1){
                high = f - 1;
            }else{
                low = s + 1;
            }
        }
        return 0;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/single-element-in-a-sorted-array/)