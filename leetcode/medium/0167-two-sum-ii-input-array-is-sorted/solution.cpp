// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> ans(2);
//         int n = nums.size();
//         for(int i = 0; i < n; i++){
//             for(int j = i + 1; j < n; j++){
//                 if(nums[i] + nums[j] == target){
//                     ans[0] = i+1;
//                     ans[1] = j+1;
//                 }
//             }
//         }
//         return ans; // TC = O(n^2).
//     }
// };
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        int n = nums.size();
        int j = n-1;
        for(int i = 0; i < n; i++){
            int sum = nums[i]+nums[j];
            if(sum > target){
                j--;
            }else if(sum < target){
                i++;
            }else{
                i++;
                ans[0] = i+1;
                ans[1] = j+1;
                return ans;
            }
        }
        return ans; // TC = O(n^2).
    }
};