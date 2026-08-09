class Solution {
  public:
    int factorial(int n) {
        // code here
        int fact = 1;
        if(n == 0 || n == 1){
            fact = 1;
        }
        for(int i = n; i > 0; i--){
            fact *= i;
        }
        return fact;
    }
};