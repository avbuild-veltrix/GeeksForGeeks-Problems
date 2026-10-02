// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int mid,low,high;
//         vector<int> ans(2,-1);
//         high = nums.size()-1;
//         low = 0;

//         //First occurance.
//         while(low <= high){
//             mid = (low + high)/2;
//             if(nums[mid] < target){
//                 low = mid + 1;
//             }else if(nums[mid] > target){
//                 high = mid - 1;
//             }else{
//                 ans[0] = mid;
//                 high = mid - 1;
//             }
//         }

//         //Last occurance.
//         low = 0;
//         high = nums.size()-1;
        
//         while(low <= high){
//             mid = (low + high)/2;
//             if(nums[mid] < target){
//                 low = mid + 1;
//             }else if(nums[mid] > target){
//                 high = mid - 1;
//             }else{
//                 ans[1] = mid;
//                 low = mid + 1;
//             }
//         }
//         return ans;
//     }
// };


// 2. Using lower_bound() and upper_bound()

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        auto first = lower_bound(nums.begin(), nums.end(), target);
        auto last = upper_bound(nums.begin(), nums.end(), target);

        if (first == nums.end() || *first != target) {
            return {-1, -1};
        }

        return {
            static_cast<int>(first - nums.begin()),
            static_cast<int>(last - nums.begin() - 1)
        };
    }
};