# Common Elements

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two integer arrays **a[]**  and  **b[]**, return an array containing all elements common to both arrays in  **sorted**  order.

If an element appears multiple times in both arrays, it should appear in the output as many times as it is common to both arrays.

 **Example:** 

```
Input: a[] = [3, 4, 2, 2, 4], b[] = [3, 2, 2, 7]
Output: [2, 2, 3]
Explanation: The common elements in sorted order are 2, 2, 3.
```

```
Input: a[] = [3, 6, 1, 7, 9, 8, 2, 2], b[] = [9, 7, 3, 4, 9]
Output: [3, 7, 9]
Explanation: The common elements in sorted order are 3, 7, 9.
```

 **Constraints:** 

1 ≤ a.size(), b.size() ≤ 105
1 ≤ a[i], b[i] ≤ 105

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-14T07:17:03.314Z  

```cpp
class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b) {
        // code here
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<int> ans = {};
        int i = 0, j = 0;
        while(i < a.size() && j < b.size()){
            if(a[i] < b[j]){
                i++;
            }else if(a[i] > b[j]){
                j++;
            }else{
                ans.push_back(a[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/common-elements5420/1)