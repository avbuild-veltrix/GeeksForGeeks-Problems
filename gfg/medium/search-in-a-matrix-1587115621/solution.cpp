class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int r = 0;
        int c = mat[0].size() - 1;

        while(r < mat.size() && c >= 0) {
            if(mat[r][c] > x) {
                c--;
            }
            else if(mat[r][c] < x) {
                r++;
            }
            else {
                return true;
            }
        }

        return false;
    }
};