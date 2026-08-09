class Solution {
  public:
    int middle(int a, int b, int c) {
        // code here
        if( ((a>b)&&(c>a)) || ((b>a)&&(a>c)) ){
            return a;
        }else if((a>b)&&(b>c) || ((c>b)&&(b>a)) ){
            return b;
        }else{
            return c;
        }
    }
};