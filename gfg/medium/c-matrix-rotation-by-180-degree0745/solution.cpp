class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        for(int i = 0; i < n/2; i++){
            for(int j = 0; j < n; j++){
                swap(mat[i][j], mat[n-i-1][j]);
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n/2; j++){
                swap(mat[i][j], mat[i][n-1-j]);
            }
        }
    }
};