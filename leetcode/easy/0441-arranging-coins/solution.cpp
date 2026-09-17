class Solution {
public:
    int arrangeCoins(int n) {
        int low = 1; 
        int high = n;
        while(low <= high){
            int mid = low + (high - low)/2;
            long long coins = 1LL * mid*(mid + 1)/2;
            if(coins <= n){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return low - 1;
    }
};