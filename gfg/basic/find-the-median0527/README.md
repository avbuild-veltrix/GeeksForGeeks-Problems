# Median of an Array

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an array  **arr[]**  of integers, calculate the median.

 **Examples:** 

```
Input: arr[] = [90, 100, 78, 89, 67]
Output: 89
Explanation: After sorting the array middle element is the median 

```

```
Input: arr[] = [56, 67, 30, 79]
Output: 61.5
Explanation: In case of even number of elements, average of two middle elements is the median. 

```

```
Input: arr[] = [1, 2]
Output: 1.5
Explanation: The average of both elements will result in 1.5.
```

 **Constraints:** 
1 <= arr.size() <= 105
1 <= arr[i] <= 105

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-09T09:19:52.442Z  

```cpp
class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        sort(arr.begin(), arr.end());
        int size = arr.size();
        double median = 0;
        for(int i = 0; i < size; i++){
            if(size % 2 == 0){
                median = (arr[size/2] + arr[(size)/2-1])/2.0;
            }else{
                median = arr[(size/2)];
            }
        }
        return median;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-the-median0527/1)