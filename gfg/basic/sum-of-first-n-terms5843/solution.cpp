class Solution {
  public:
    int sumOfSeries(int n) {
        // code here
        int c = 0, cube = 0;
        for(int i = 1; i <= n; i++){
            c = (i*i*i);
            cube += c;
        }
        return cube;
    }
};