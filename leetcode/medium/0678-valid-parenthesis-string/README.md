# Valid Parenthesis String

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s` containing only three types of characters: `'('`, `')'` and `' *'`, return `true`* if *`s`* is  **valid** *.

The following rules define a  **valid**  string:

- Any left parenthesis '(' must have a corresponding right parenthesis ')'.
- Any right parenthesis ')' must have a corresponding left parenthesis '('.
- Left parenthesis '(' must go before the corresponding right parenthesis ')'.
- '*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string "".

 

 **Example 1:** 

```
Input: s = "()"
Output: true

```

 **Example 2:** 

```
Input: s = "(*)"
Output: true

```

 **Example 3:** 

```
Input: s = "(*))"
Output: true

```

 **Example 4:** 

```
Input: s = "("
Output: false

```

 

 **Constraints:** 

- 1 <= s.length <= 100
- s[i] is '(', ')' or '*'.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.1 MB (beats 47.87%)  
**Submitted:** 2026-10-05T12:42:42.669Z  

```cpp
class Solution {
public:
    bool checkValidString(string s) {
        int low = 0;
        int high = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                low++;
                high++;
            }else if(s[i] == ')'){
                low--;
                high--;
            }else{
                low--;
                high++;
            }
            low = max(0, low);
            if(high < 0){
                return false;
            }
        }
        return (low == 0);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-parenthesis-string/)