// Time Limit Exceeded Problem.
// class Solution {
// public:
//     long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
//         vector<int> diff(nums1.size());

//         for (int i = 0; i < nums1.size(); i++) {
//             diff[i] = abs(nums1[i] - nums2[i]);
//         }

//         int k = k1 + k2;

//         for (int j = 0; j < k; j++) {
//             int maxIndex = 0;

//             for (int i = 0; i < diff.size(); i++) {
//                 if (diff[i] > diff[maxIndex]) {
//                     maxIndex = i;
//                 }
//             }

//             if (diff[maxIndex] > 0) {
//                 diff[maxIndex]--;
//             }
//         }

//         long long result = 0;

//         for (int i = 0; i < diff.size(); i++) {
//             result += 1LL * diff[i] * diff[i];
//         }

//         return result;
//     }
// };


class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        vector<int> diff(n);

        long long total = 0;
        int maximum = 0;

        for (int i = 0; i < n; i++) {
            diff[i] = abs(nums1[i] - nums2[i]);
            total += diff[i];
            maximum = max(maximum, diff[i]);
        }

        long long k = 1LL * k1 + k2;

        if (total <= k) {
            return 0;
        }

        int low = 0, high = maximum;

        while (low < high) {
            int mid = low + (high - low) / 2;
            long long operations = 0;

            for (int d : diff) {
                if (d > mid) {
                    operations += d - mid;
                }
            }

            if (operations > k) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        long long result = 0;
        long long remaining = k;

        for (int d : diff) {
            int reduced = min(d, low);
            remaining -= d - reduced;
            result += 1LL * reduced * reduced;
        }

        for (int i = 0; i < n && remaining > 0; i++) {
            if (diff[i] >= low && low > 0) {
                result -= 1LL * low * low;
                result += 1LL * (low - 1) * (low - 1);
                remaining--;
            }
        }

        return result;
    }
};
