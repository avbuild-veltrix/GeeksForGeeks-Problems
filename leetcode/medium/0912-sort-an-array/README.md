# Sort an Array

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers `nums`, sort the array in ascending order and return it.

You must solve the problem  **without using any built-in**  functions in `O(nlog(n))` time complexity and with the smallest space complexity possible.

 

 **Example 1:** 

```
Input: nums = [5,2,3,1]
Output: [1,2,3,5]
Explanation: After sorting the array, the positions of some numbers are not changed (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).

```

 **Example 2:** 

```
Input: nums = [5,1,1,2,0,0]
Output: [0,0,1,1,2,5]
Explanation: Note that the values of nums are not necessarily unique.

```

 

 **Constraints:** 

- 1 <= nums.length <= 5 * 104
- -5  *104 <= nums[i] <= 5*  104

## Solution

**Language:** C++  
**Runtime:** 551 ms (beats 54.64%)  
**Memory:** 295.7 MB (beats 10.24%)  
**Submitted:** 2026-09-25T05:30:32.994Z  

```cpp
class Solution {
public:

    // Merge two sorted parts
    void merge(vector<int>& nums, int low, int mid, int high) {

        vector<int> temp;

        int i = low;
        int j = mid + 1;

        // Compare both halves
        while (i <= mid && j <= high) {

            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            }
            else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        // Remaining elements of left half
        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        // Remaining elements of right half
        while (j <= high) {
            temp.push_back(nums[j]);
            j++;
        }

        // Copy temp back to nums
        for (int k = 0; k < temp.size(); k++) {
            nums[low + k] = temp[k];
        }
    }


    // Merge Sort
    void mergeSort(vector<int>& nums, int low, int high) {

        // Base case
        if (low >= high)
            return;

        int mid = low + (high - low) / 2;

        // Sort left half
        mergeSort(nums, low, mid);

        // Sort right half
        mergeSort(nums, mid + 1, high);

        // Merge sorted halves
        merge(nums, low, mid, high);
    }


    vector<int> sortArray(vector<int>& nums) {

        mergeSort(nums, 0, nums.size() - 1);

        return nums;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sort-an-array/)