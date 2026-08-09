class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int gd = __gcd(a,b);
        int lcm = (a/gd)*b;
        return {lcm, gd};
    }
};