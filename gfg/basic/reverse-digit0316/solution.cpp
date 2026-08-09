class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int count;
        int rev = 0;
        while(n>0){
            count = n % 10;
            rev = rev * 10 + count;
            n = n/10;
        }
        return rev;
    }
};