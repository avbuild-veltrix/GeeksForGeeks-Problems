class Solution {
  public:

    long long fact(int n){
        long long ft = 1;
        for(int i = n; i > 0; i--){
            ft = ft*i;
        }
        return ft;
    }  
  
    long long nPr(int n, int r) {
        // code here
        return ((fact(n))/fact(n-r));
    }
};