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


class Solution {
public:
    int singleNonDuplicate(vector<int>& array) {
        int n = array.size();
        int high = n-1;
        int low = 0;
        int mid;
        while(low < high){
            mid = low + (high - low)/2;
            if(mid%2 == 1){
                mid--;
            }
            if(array[mid] == array[mid + 1]){
                low = mid + 2;
            }else{
                high = mid - 1;
            }
        }
        int ans = array[low];
        return ans;
    }
};