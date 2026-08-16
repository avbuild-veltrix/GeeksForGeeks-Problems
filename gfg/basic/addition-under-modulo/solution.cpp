class Solution {
  public:
    int sumUnderModulo(int a, int b, int M) {
        // code here
        int sum = a + b;
        return (sum%M);
    }
};