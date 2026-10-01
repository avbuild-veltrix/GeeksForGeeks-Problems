// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         int high = n - 1;
//         int low = 0;
//         while(low <= high){
//             int mid = low + (high - low)/2;
//             if(nums[mid] == target){
//                 return mid;
//             }
//             if(nums[low] <= nums[mid]){
//                 if(nums[low] <= target && target <= nums[mid]){
//                     high = mid - 1;
//                 }else{
//                     low = mid + 1;
//                 }
//             }else{
//                 if(nums[mid] < target && target <= nums[high]){
//                     low = mid + 1;
//                 }else{
//                     high = mid - 1;
//                 }
//             }
//         }
//         return -1;
//     }
// };


class Solution {
public:
    int helper(vector<int>& nums, int target, int low , int high) {
        
        if(low > high){
            return -1;
        }

        int mid = low + (high - low)/2;

        if(nums[mid] == target){
            return mid;
        }

        if(nums[low] <= nums[mid]){
            if(nums[low] <= target && target <= nums[mid]){
                return helper(nums, target, low , mid - 1);
            }else{
                return helper(nums, target, mid + 1 , high);
            }
        }else{
            if(nums[mid] < target && target <= nums[high]){
                return helper(nums, target, mid + 1 , high);
            }else{
                return helper(nums, target, low , mid - 1);
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target){
        return helper(nums, target, 0, nums.size() - 1);
    }
};


// class Solution {
// public:

//     int helper(vector<int>& nums, int target, int low, int high) {

//         // Base case
//         if(low > high) {
//             return -1;
//         }

//         int mid = low + (high - low) / 2;

//         // Target found
//         if(nums[mid] == target) {
//             return mid;
//         }

//         // Left half is sorted
//         if(nums[low] <= nums[mid]) {

//             if(nums[low] <= target && target <= nums[mid]) {
//                 return helper(nums, target, low, mid - 1);
//             }
//             else {
//                 return helper(nums, target, mid + 1, high);
//             }
//         }

//         // Right half is sorted
//         else {

//             if(nums[mid] < target && target <= nums[high]) {
//                 return helper(nums, target, mid + 1, high);
//             }
//             else {
//                 return helper(nums, target, low, mid - 1);
//             }
//         }
//     }

//     int search(vector<int>& nums, int target) {

//         return helper(nums, target, 0, nums.size() - 1);
//     }
// };