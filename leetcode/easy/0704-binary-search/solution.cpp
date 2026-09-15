class Solution {
public:
    int search(vector<int>& values, int target) {
        int mid, high, low;
        high = values.size()-1;
        low = 0;
        while(low <= high){
            mid = (low + high)/2;
            if(values[mid] > target){
                high = mid-1;
            }else if(values[mid] < target){
                low = mid+1;
            }else{
                return mid;
            }
        }
        return -1;
    }
};