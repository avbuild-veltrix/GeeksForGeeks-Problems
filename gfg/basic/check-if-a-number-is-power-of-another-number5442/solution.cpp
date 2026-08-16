class Solution {
  public:
    bool isPower(int x, int y) {
        // code here
        int i = 1;
        for(i = 1; i < y; i++){
            if(x == 1){
                return false;
            }
            else if(y%x == 0 && x != 1){
                y = y/x;
            }else{
                return false;
            }
        }
        if(i){
            return true;
        }
    }
};