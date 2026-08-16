class Solution {
  public:
    bool isDigitSumPalindrome(int n) {
        // code here
        int sum = 0;
        while(n>0){
            int rem = n%10;
            sum += rem;
            n /= 10;
        }
        int pl1 = sum;
        int pl = 0;
        while(sum > 0){
            int rem = sum%10;
            pl = 10*pl + rem;
            sum /= 10;
        }
        if(pl == pl1){
            return true;
        }else{
            return false;
        }
    }
};