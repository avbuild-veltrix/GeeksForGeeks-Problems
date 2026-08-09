class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        sort(arr.begin(), arr.end());
        int size = arr.size();
        double median = 0;
        for(int i = 0; i < size; i++){
            if(size % 2 == 0){
                median = (arr[size/2] + arr[(size)/2-1])/2.0;
            }else{
                median = arr[(size/2)];
            }
        }
        return median;
    }
};