class Solution {
public:
    vector<int> quadraticRoots(int a, int b, int c) {
        
        int D = (b * b) - (4 * a * c);

        if (D < 0) {
            return {-1};
        }

        double r1 = ((-b) + sqrt(D)) / (2.0 * a);
        double r2 = ((-b) - sqrt(D)) / (2.0 * a);

        int root1 = floor(r1);
        int root2 = floor(r2);

        return {max(root1, root2), min(root1, root2)};
    }
};