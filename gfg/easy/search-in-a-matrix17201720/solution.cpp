class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // code here
        int r = 0;
        int c = mat[0].size()-1;
        bool found = false;
        while(r < mat.size() && c >= 0){
            if(mat[r][c] > x){
                c--;
            }else if(mat[r][c] < x){
                r++;
            }else{
                found = true;
                return found;
            }
        }
        return found;
    }
};