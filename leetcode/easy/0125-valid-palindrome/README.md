# Valid Palindrome

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A phrase is a  **palindrome**  if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` *if it is a  **palindrome**, or* `false` *otherwise*.

 

 **Example 1:** 

```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

```

 **Example 2:** 

```
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

```

 **Example 3:** 

```
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

```

 

 **Constraints:** 

- 1 <= s.length <= 2 * 105
- s consists only of printable ASCII characters.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.9 MB (beats 52.17%)  
**Submitted:** 2026-09-23T11:16:16.777Z  

```cpp
class Solution {
public:

    bool isInvalid(char ch) {
        if(ch >= 'A' && ch <= 'Z') {
            return false;
        }
        else if(ch >= 'a' && ch <= 'z') {
            return false;
        }
        else if(ch >= '0' && ch <= '9') {
            return false;
        }
        else {
            return true;
        }
    }

    bool isPalindrome(string s) {

        int i = 0;
        int j = s.length() - 1;

        while(i < j) {

            if(isInvalid(s[i])) {
                i++;
            }
            else if(isInvalid(s[j])) {
                j--;
            }
            else {

                // Convert uppercase to lowercase
                if(s[i] >= 'A' && s[i] <= 'Z') {
                    s[i] = s[i] + 32;
                }

                if(s[j] >= 'A' && s[j] <= 'Z') {
                    s[j] = s[j] + 32;
                }

                if(s[i] != s[j]) {
                    return false;
                }

                i++;
                j--;
            }
        }

        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-palindrome/)