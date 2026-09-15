// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> ans = {};
//         for(int i = 0; i < nums1.size(); i++){
//             for(int j = 0; j < nums2.size(); j++){
//                 if(nums1[i] == nums2[j]){
//                     bool found = false;

//                     for(int k = 0; k < ans.size(); k++){
//                         if(ans[k] == nums1[i]){
//                             found = true;
//                             break;
//                         }
//                     }
//                     if(!found){
//                         ans.push_back(nums1[i]);
//                     }
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if( i != j && nums1[i] == nums2[j]){
                    result.push_back(nums1[i]);
                }
            }
        }
        for(int i = 0; i < result.size(); i++){
            for(int j = 0; j < result.size(); j++){
                if(i != j && result[i] == result[j]){
                    result.erase(result.begin() + i);
                }
            }
        }
        return result;
    }
};