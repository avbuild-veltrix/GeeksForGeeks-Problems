class Solution {
public:

    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int low = 0;
        int m = mat.size();
        int n = mat[0].size();
        int high = m * n - 1;
        while(low <= high){
            int mid = low + (high - low)/2;

            int row = mid / n;
            int column = mid % n;

            if(mat[row][column] == target){
                return true;
            }else if(mat[row][column] < target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return false;
    }
};


// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& mat, int x) {
//         int r = 0;
//         int c = mat[0].size()-1;
//         bool found = false;
//         while(r < mat.size() && c >= 0){
//             if(mat[r][c] > x){
//                 c--;
//             }else if(mat[r][c] < x){
//                 r++;
//             }else{
//                 found = true;
//                 return found;
//             }
//         }
//         return found;
//     }
// };