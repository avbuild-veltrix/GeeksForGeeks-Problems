class Solution {
  public:
    int kthDigit(int a, int b, int k) {
        // code here
        long long res = 1;
        for(int i = 1; i <= b; i++){
            res = res * a;
        }
        for(int i = 1; i < k; i++){
            res = res/10;
        }
        return res%10;
    }
};