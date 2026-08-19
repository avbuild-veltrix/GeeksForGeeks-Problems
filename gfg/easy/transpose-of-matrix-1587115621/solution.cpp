class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        // code here
        int r = mat.size();
        int c = mat[0].size();
        vector<vector<int>> arr(c, vector<int>(r));
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                arr[j][i] = mat[i][j];
            }
        }
        return arr;
    }
};