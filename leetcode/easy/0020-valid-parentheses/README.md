# Valid Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:

- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.
- Every close bracket has a corresponding open bracket of the same type.

 

 **Example 1:** 

 **Input:**  s = "()"

 **Output:**  true

 **Example 2:** 

 **Input:**  s = "()[]{}"

 **Output:**  true

 **Example 3:** 

 **Input:**  s = "(]"

 **Output:**  false

 **Example 4:** 

 **Input:**  s = "([])"

 **Output:**  true

 **Example 5:** 

 **Input:**  s = "([)]"

 **Output:**  false

 

 **Constraints:** 

- 1 <= s.length <= 104
- s consists of parentheses only '()[]{}'.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.9 MB (beats 37.05%)  
**Submitted:** 2026-10-01T04:37:38.954Z  

```cpp
class Solution {
public:
    
    bool isMatching(char opening, char closing){
        if(opening == '(' && closing == ')'){
            return true;
        }
        if(opening == '{' && closing == '}'){
            return true;
        }
        if(opening == '[' && closing == ']'){
            return true;
        }
    return false;
    }
    
    bool isValid(string s) {
        char ch;
        char opening;
        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            ch = s[i];
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else if(ch == ')' || ch == '}' || ch == ']'){
                if(st.empty()){
                    return false;
                }
                opening = st.top();
                st.pop();

                if(!isMatching(opening, ch)){
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-parentheses/)