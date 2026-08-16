class Solution {
  public:
    int gcd(int n, vector<int> arr) {
        // Your code goes here
        int result = arr[0];
        for(int i = 1; i < n; i++){
            int a = result;
            int b = arr[i];
            
            while(b){
                int rem = a%b;
                a = b;
                b = rem;
            }
            result = a;
        }
        return result;
    }
};
