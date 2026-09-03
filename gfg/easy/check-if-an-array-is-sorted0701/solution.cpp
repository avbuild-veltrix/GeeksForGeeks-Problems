class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        int n = arr.size();

        // Loop runs only if n >= 2
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false; // Found an unsorted pair
            }
        }

        return true; // Entire array checked (or array has < 2 elements)
    }
};