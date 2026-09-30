class Solution {
public:

    int Power(int a, long long b) {

        if(b == 0) {
            return 1;
        }

        int half = Power(a, b / 2);

        if(b % 2 == 0) {
            return (1LL * half * half) % 1337;
        }
        else {
            return (1LL * a * half * half) % 1337;
        }
    }

    int myPow(int a, int b) {

        int n = b;

        if(n < 0) {
            return 1 / Power(a, -n);
        }

        return Power(a, n);
    }

    int superPow(int a, vector<int>& b) {

        int result = 1;

        for(int i = 0; i < b.size(); i++) {

            result = Power(result, 10);

            result = (1LL * result * Power(a, b[i])) % 1337;
        }

        return result;
    }
};