class Solution {
public:
    int superPow(int a, vector<int>& b) {
        int n = b.size();
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum = sum * 10 + b[i];
        }
        return pow(a,sum);
    }
};