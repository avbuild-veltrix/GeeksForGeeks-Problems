# Best Time to Buy and Sell Stock II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `prices` where `prices[i]` is the price of a given stock on the `ith` day.

On each day, you may decide to buy and/or sell the stock. You can only hold  **at most one**  share of the stock at any time. However, you can sell and buy the stock multiple times on the  **same day**, ensuring you never hold more than one share of the stock.

Find and return  *the  **maximum**  profit you can achieve*.

 

 **Example 1:** 

```
Input: prices = [7,1,5,3,6,4]
Output: 7
Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
Total profit is 4 + 3 = 7.

```

 **Example 2:** 

```
Input: prices = [1,2,3,4,5]
Output: 4
Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
Total profit is 4.

```

 **Example 3:** 

```
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: There is no way to make a positive profit, so we never buy the stock to achieve the maximum profit of 0.

```

 

 **Constraints:** 

- 1 <= prices.length <= 3 * 104
- 0 <= prices[i] <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 20 MB (beats 63.89%)  
**Submitted:** 2026-09-16T10:39:55.881Z  

```cpp
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {

//         int buy1 = INT_MAX;
//         int profit1 = 0;

//         int buy2 = INT_MAX;
//         int profit2 = 0;

//         for(int price : prices) {

//             buy1 = min(buy1, price);

//             profit1 = max(profit1, price - buy1);

//             buy2 = min(buy2, price - profit1);

//             profit2 = max(profit2, price - buy2);
//         }

//         return profit2;
//     }
// };

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         int min = prices[0];
//         int min1 = prices[i];
//         int maxProfit1 = 0;
//         int maxProfit2 = 0;
//         for(int i = 0; i < n; i++){
//             if(min >  prices[i]){
//                 min = prices[i]; 
//             }
//             int profit = prices[i] - min;
//             if(profit > maxProfit1) {
//                 maxProfit1 = profit;
//             }
//             for(int j = i; j < n; j++){
//                 if(min1 >  prices[i]){
//                     min1 = prices[i]; 
//                 }
//                 profit = prices[i] - min;
//                 if(profit > maxProfit2) {
//                     maxProfit2 = profit;
//                 }
//             }
//         }
//         return maxProfit1 + maxProfit2;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        for(int i = 1; i < prices.size(); i++) {

            if(prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }

        }

        return profit;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/)