class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        return arr[k-1];
        // int n = arr.size();
        // for(int i = 0; i < k; i++){
        //     int minIndex = i;
        //     for(int j = i+1; j < n; j++){
        //         if(arr[j] < arr[minIndex]){
        //             minIndex = j;
        //         }
        //     }
        //     swap(arr[i], arr[minIndex]);
        // }
        // return arr[k-1];
    }
};