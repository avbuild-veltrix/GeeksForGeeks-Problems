// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& array) {
//         int n = array.size();
//         int high = n-1;
//         int low = 0;
//         int mid;
//         while(low < high){
//             mid = low + (high - low)/2;
//             if(mid%2 == 1){
//                 mid--;
//             }
//             if(array[mid] == array[mid + 1]){
//                 low = mid + 2;
//             }else{
//                 high = mid;
//             }
//         }
//         int ans = array[low];
//         return ans;
//     }
// };


// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& array) {
//         int n = array.size();
//         int high = n-1;
//         int low = 0;
//         int mid;
//         while(low < high){
//             mid = low + (high - low)/2;
//             if(mid%2 == 1){
//                 mid--;
//             }
//             if(array[mid] == array[mid + 1]){
//                 low = mid + 2;
//             }else{
//                 high = mid - 1;
//             }
//         }
//         int ans = array[low];
//         return ans;
//     }
// };


class Solution {
public:
    int singleNonDuplicate(vector<int>& array) {
        int n = array.size();
        int high = n-1;
        int low = 0;
        int mid;
        while(low <= high){
            int mid = low + (high - low)/2;
            if ((mid == 0 || array[mid] != array[mid - 1]) &&
                (mid == n - 1 || array[mid] != array[mid + 1])
            ) {
                return array[mid];
            }
            int f = mid, s = mid;
            if(mid > 0 && array[mid] == array[mid-1]){
                f = mid - 1;
            }else{
                s = mid+1;
            }
            int leftLength = f - low;
            if(leftLength % 2 == 1){
                high = f - 1;
            }else{
                low = s + 1;
            }
        }
        return 0;
    }
};