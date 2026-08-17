class Solution {
  public:
    int sumOfAP(int n, int a, int d) {
        // Code here.
        return {((n)*(2*a+(n-1)*d))/2};
    }
};