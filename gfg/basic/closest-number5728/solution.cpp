class Solution {
public:
    int closestNumber(int n, int m) {
        
        int rem = n % m;
        
        int lower = n - rem;
        int upper;
        
        if (n >= 0) {
            upper = lower + abs(m);
        } else {
            upper = lower - abs(m);
        }
        
        int d1 = abs(n - lower);
        int d2 = abs(n - upper);
        
        if (d1 < d2)
            return lower;
        
        if (d2 < d1)
            return upper;
        
        return abs(lower) > abs(upper) ? lower : upper;
    }
};