# Most Frequent Character

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string  **s** of lowercase alphabets. The task is to find the maximum occurring character in the string  **s**. If more than one character occurs the maximum number of times then print the lexicographically smaller character.

 **Examples:** 

```
Input: s = "testsample"
Output: 'e'
Explanation: 'e' is the character which is having the highest frequency.
```

```
Input: s = "output"
Output: 't'
Explanation: 't' and 'u' are the characters with the same frequency, but 't' is lexicographically smaller.
```

 **Constraints:** 
1 ≤ |s| ≤ 100

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T12:50:57.710Z  

```cpp
class Solution {
public:
    char getMaxOccuringChar(string& s) {

        int freq[256] = {0};

        // Count frequency
        for(char ch : s) {
            freq[(unsigned char)ch]++;
        }

        int maxFreq = 0;

        // Find maximum frequency
        for(int i = 0; i < 256; i++) {
            if(freq[i] > maxFreq) {
                maxFreq = freq[i];
            }
        }

        // Find alphabetically first character
        for(int i = 0; i < 256; i++) {
            if(freq[i] == maxFreq) {
                return char(i);
            }
        }

        return '\0';
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1)