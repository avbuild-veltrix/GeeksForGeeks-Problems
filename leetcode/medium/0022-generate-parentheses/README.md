# Generate Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given `n` pairs of parentheses, write a function to  *generate all combinations of well-formed parentheses*.

 

 **Example 1:** 

```
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

```

 **Example 2:** 

```
Input: n = 1
Output: ["()"]

```

 

 **Constraints:** 

- 1 <= n <= 8

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 67.20%)  
**Memory:** 15.7 MB (beats 47.96%)  
**Submitted:** 2026-10-02T03:17:53.419Z  

```cpp
class Solution {
public:

    void generate(string current, int opening, int closing, int n, vector<string> &ans){
        if(opening == n && closing == n){
            ans.push_back(current);
            return;
        }

        if(opening < n){
            generate(current + "(", opening + 1, closing, n, ans);
        }
        
        if(closing < opening){
            generate(current + ")", opening, closing + 1, n, ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate("", 0 , 0, n, ans);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/generate-parentheses/)