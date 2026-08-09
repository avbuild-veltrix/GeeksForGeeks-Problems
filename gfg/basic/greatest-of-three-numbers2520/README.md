# Greatest of three numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given three numbers a, b and c. Find the greatest number among them.

 **Examples:** 

```
Input: a = 10, b = 3, c = 2
Output: 10
Explanation: 10 is greatest among the three 
```

```
Input: a = -4, b = -3, c = -2
Output: -2
Explanation: -2 is greatest among the three
```

 **Constraints:** 
-109≤ a, b, c ≤109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-09T08:35:08.631Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    // code here
    if((a>b) && ( a>c)){
        cout<<a;
    }else if(b>c){
        cout<<b;
    }else{
        cout<<c;
    }

    return 0;
}

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/greatest-of-three-numbers2520/1)