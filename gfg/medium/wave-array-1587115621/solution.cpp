class Solution {
public:
    void sortInWave(vector<int>& arr) {

        int a = 0;

        while(a < arr.size() - 1) {
            swap(arr[a], arr[a + 1]);
            a += 2;
        }
    }
};