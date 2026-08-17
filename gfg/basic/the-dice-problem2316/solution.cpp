class Solution {
  public:
    int oppositeFaceOfDice(int n) {
        // code here
        if(n==1){
            return 6;
        }else if(n == 2){
            return 5;
        }else if(n==3){
            return 4;
        }else if(n==4){
            return 3;
        }else if(n==5){
            return 2;
        }else if(n==6){
            return 1;
        }
    }
};