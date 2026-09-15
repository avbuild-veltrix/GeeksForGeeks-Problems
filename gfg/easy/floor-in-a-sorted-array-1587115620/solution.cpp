class Solution {
  public:
    int findFloor(vector<int>& arr, int target) {
        // code here
        int low, high, mid, ans = -1;
        high = arr.size() - 1;
        low = 0;
        while(low <= high){
            mid = (low + high)/2;
            if(arr[mid] <= target){
                ans = mid;
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return ans;
    }
};
