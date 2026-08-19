class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                swap(mat[j][i], mat[i][j]);
            }
        }
        
        for(int i = 0; i < n; i++){
            int start = 0, end = n-1;
            while(start < end){
                swap(mat[start][i], mat[end][i]);
                start++;
                end--;
            }
        }
    }
};
