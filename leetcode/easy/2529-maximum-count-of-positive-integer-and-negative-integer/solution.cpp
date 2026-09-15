// class Solution {
// public:
//     int maximumCount(vector<int>& nums) {
//         int n = nums.size();
//         int last = n-1;
//         int neg = 0, pos = 0;
//         for(int i = 0; i < n; i++){
//             if(nums[i] < 0){
//                 neg++;
//             }else if(nums[i] > 0){
//                 pos++;
//             }else{

//             }
//         }
//         if(pos > neg){
//             return pos;
//         }else{
//             return neg;
//         }
//     }
// };

class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int n = nums.size();

        // First element >= 0
        int low = 0, high = n - 1;
        int firstNonNegative = n;

        while(low <= high) {
            int mid = (low + high) / 2;

            if(nums[mid] >= 0) {
                firstNonNegative = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        int neg = firstNonNegative;


        // First element > 0
        low = 0;
        high = n - 1;
        int firstPositive = n;

        while(low <= high) {
            int mid = (low + high) / 2;

            if(nums[mid] > 0) {
                firstPositive = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        int pos = n - firstPositive;

        return max(neg, pos);
    }
};