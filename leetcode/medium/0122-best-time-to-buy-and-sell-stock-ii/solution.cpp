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